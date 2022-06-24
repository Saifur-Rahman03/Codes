
/**
 * Write a description of class LogAnalyzer here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.util.*;
import edu.duke.*;

public class LogAnalyzer
{
     private ArrayList<LogEntry> records;
     
     public LogAnalyzer() {
         // complete constructor
         records = new ArrayList<LogEntry>();
     }
        
     public void readFile(String filename) {
         String source = "F:\\Mine\\Coursera\\Java Programming and Software Engineering Fundamentals\\Java Programming Arrays, Lists, Structured Data\\Codes\\Web Server Logs\\";
         // complete method
         FileResource fr = new FileResource(source + filename);
         for(String line : fr.lines()) {
             LogEntry le = WebLogParser.parseEntry(line); 
             records.add(le);
         }
     }
        
     public void printAll() {
         for (LogEntry le : records) {
             System.out.println(le);
         }
     }
     
     public int countUniqueIPs() {
         ArrayList<String> uniqueIPs = new ArrayList<String>();
         
         for(LogEntry le : records) {
             String ipAddr = le.getIPAddress();
             if(!uniqueIPs.contains(ipAddr)) {
                 uniqueIPs.add(ipAddr);
             }
         }
         return uniqueIPs.size();
     }
     
     public void printAllHigherThanNum(int num) {
         ArrayList<Integer> sc = new ArrayList<Integer>();
         for(LogEntry le : records) {
             int statusCode = le.getStatusCode();
             if(statusCode > num && !sc.contains(statusCode)) {
                 sc.add(statusCode);
             }
         }
         for(Integer i : sc) {
             System.out.println(i);
         }
     }
     
     public ArrayList uniqueIPVisitsOnDay(String someday) {
         ArrayList<String> ips = new ArrayList<String>();
         for(LogEntry le : records) {
             String ip = le.getIPAddress();
             Date date = le.getAccessTime();
             String d = date.toString();
             String day = d.substring(4, 10);
             if(day.equals(someday) && (!ips.contains(ip))) {
                 ips.add(ip);
             }
         }
         return ips;
     }
     
     public int countUniqueIPsInRange(int low, int high) {
         ArrayList<String> ips = new ArrayList<String>();
         for(LogEntry le : records) {
             String ip = le.getIPAddress();
             int statusCode = le.getStatusCode();
             if(statusCode >= low && statusCode <= high && !ips.contains(ip)) {
                 ips.add(ip);
             }
         }
         return ips.size();
     }
     
     public HashMap<String, Integer> countVisitsPerIP() {
         HashMap<String, Integer> counts = new HashMap<String, Integer>();
         for(LogEntry le : records) {
             String ip = le.getIPAddress();
             if(!counts.containsKey(ip)) {
                 counts.put(ip, 1);
             }
             else {
                 counts.put(ip, counts.get(ip) + 1);
             }
         }
         return counts;
     }
     
     public int mostNumberVisitsByIP(HashMap<String, Integer> counts) {
         int highest = -1;
         for(String s : counts.keySet()) {
             if(counts.get(s) > highest) {
                 highest = counts.get(s);
             }
         }
         return highest;
     }
     
     public ArrayList<String> ipsMostVisits(HashMap<String, Integer> counts) {
         ArrayList<String> ips = new ArrayList<String>();
         int highestIP = mostNumberVisitsByIP(counts);
         for(String s : counts.keySet()) {
             if(counts.get(s) == highestIP) {
                 ips.add(s);
             }
         }
         return ips;
     }
     
     public HashMap<String, ArrayList<String>> ipsForDays() {
         HashMap<String, ArrayList<String>> days = new HashMap<String, ArrayList<String>>();
         for(LogEntry le : records) {
             String ip = le.getIPAddress();
             Date date = le.getAccessTime();
             String d = date.toString();
             String day = d.substring(4, 10);
             if(!days.containsKey(day)) {
                 ArrayList<String> ips = new ArrayList<String>();
                 ips.add(ip);
                 days.put(day, ips);
             }
             else {
                 ArrayList<String> ips = new ArrayList<String>();
                 ips = days.get(day);
                 ips.add(ip);
                 days.remove(day);
                 days.put(day, ips);
             }
         }
         return days;
     }
     
     public String daysWithMostIPVisits(HashMap<String, ArrayList<String>> days) {
         int highestIP = -1;
         String day = "";
         for(String s : days.keySet()) {
             ArrayList<String> ips = new ArrayList<String>();
             ips = days.get(s);
             int numIP = ips.size();
             if(numIP > highestIP) {
                 highestIP = numIP;
                 day = s;
             }
         }
         return day;
     }
     
     public ArrayList<String> iPsWithMostVisitsOnDay(HashMap<String, ArrayList<String>> days,
                                                        String day) {
         ArrayList<String> ips = new ArrayList<String>();
         ips = days.get(day);
         HashMap<String, Integer> counts = new HashMap<String, Integer>();
         for(String ip : ips) {
             if(!counts.containsKey(ip)) {
                 counts.put(ip, 1);
             }
             else {
                 counts.put(ip, counts.get(ip) + 1);
             }
         }
         int highestVisit = mostNumberVisitsByIP(counts);
         ArrayList<String> mostVisitedIPs = new ArrayList<String>();
         mostVisitedIPs = ipsMostVisits(counts);
         return mostVisitedIPs;
     }
}
