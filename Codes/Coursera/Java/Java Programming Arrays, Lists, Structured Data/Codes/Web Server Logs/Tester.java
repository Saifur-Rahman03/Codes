
/**
 * Write a description of Tester here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.util.*;

public class Tester {
    public void testLogEntry() {
        LogEntry le = new LogEntry("1.2.3.4", new Date(), "example request", 
                    200, 500);
        System.out.println(le); //this object automatically accesses toString() method
        LogEntry le2 = new LogEntry("1.2.100.4", new Date(), "example request 2", 
                    300, 400);
        System.out.println(le2); //if the method name is other than toString() then it won't call that automatically
    }
    public void testLogAnalyzer() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("short-test_log");
        la.printAll();
    }
    public void testUniqueIP() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        int uniqueIPs = la.countUniqueIPs();
        System.out.println("unique ips = " + uniqueIPs);
    }
    public void testStatusCode() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog1_log");
        la.printAllHigherThanNum(400);
    }
    public void testAccessTime() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        String day = "Sep 24";
        ArrayList<String> ips = new ArrayList<String>();
        ips = la.uniqueIPVisitsOnDay(day);
        for(String ip : ips) {
            System.out.println(ip);
        }
        System.out.println("size: " + ips.size());
    }
    public void testNumOfIPsInRange() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        int low = 200;
        int high = 299;
        int ips =  la.countUniqueIPsInRange(low, high);
        System.out.println("number of ips in range: " + ips);
    }
    public void testCount() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("short-test_log");
        HashMap<String, Integer> counts = la.countVisitsPerIP();
        System.out.println(counts);
    }
    public void testMostVisitsByIP() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        HashMap<String, Integer> counts = la.countVisitsPerIP();
        int mostVisit = la.mostNumberVisitsByIP(counts);
        System.out.println("most visit by single ip: " + mostVisit);
    }
    public void testMostVisitedIP() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        HashMap<String, Integer> counts = la.countVisitsPerIP();
        ArrayList<String> ips = la.ipsMostVisits(counts);
        for(String s : ips) {
            System.out.println(s);
        }
    }
    public void testIPsForDays() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog3-short_log");
        HashMap<String, ArrayList<String>> days = la.ipsForDays();
        for(String s : days.keySet()) {
            System.out.println(s + ": ");
            ArrayList<String> ips = new ArrayList<String>();
            ips = days.get(s);
            for(String ip : ips) {
                System.out.println(ip);
            }
            System.out.println();
        }
    }
    public void testDaysWithMostIP() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        HashMap<String, ArrayList<String>> days = la.ipsForDays();
        String day = la.daysWithMostIPVisits(days);
        System.out.println(day);
    }
    public void testMostVisitedIPsOnDay() {
        LogAnalyzer la = new LogAnalyzer();
        la.readFile("weblog2_log");
        HashMap<String, ArrayList<String>> days = la.ipsForDays();
        ArrayList<String> ips = new ArrayList<String>();
        String day = "Sep 29";
        ips = la.iPsWithMostVisitsOnDay(days, day);
        for(String s : ips) {
            System.out.println(s);
        }
    }
}
