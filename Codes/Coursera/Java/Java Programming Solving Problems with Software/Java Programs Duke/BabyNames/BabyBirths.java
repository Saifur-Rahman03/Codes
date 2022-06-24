
/**
 * Write a description of BabyBirths here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import org.apache.commons.csv.*;
import java.io.*;

public class BabyBirths {
    public void printNames() {
        FileResource fr = new FileResource();
        CSVParser parser = fr.getCSVParser(false);
        for(CSVRecord rec : parser) {
            int numBorn = Integer.parseInt(rec.get(2));
            if(numBorn <= 100) {
                System.out.println("Name: " + rec.get(0) +
                               " Gender: " + rec.get(1) +
                               " Num Born: " + rec.get(2));
        
            }
        }
    }
    public void totalBirths(FileResource fr) {
        int totalBirths = 0;
        int totalBoys = 0;
        int totalGirls = 0;
        int totalNames = 0;
        int totalBoysName = 0;
        int totalGirlsName = 0;
        for(CSVRecord rec : fr.getCSVParser(false)) {
            int numBorn = Integer.parseInt(rec.get(2));
            totalBirths += numBorn;
            totalNames++;
            if(rec.get(1).equals("M")) {
                totalBoys += numBorn;
                totalBoysName++;
            }
            else {
                totalGirls += numBorn;
                totalGirlsName++;
            }
        }
        System.out.println("total Births = " + totalBirths);
        System.out.println("total Boys = " + totalBoys);
        System.out.println("total Girls = " + totalGirls);
        System.out.println("Total Names = " + totalNames);
        System.out.println("Total Boys Names = " + totalBoysName);
        System.out.println("Total Girls Names = " + totalGirlsName);        
    }
    public void testTotalBirths() {
        FileResource fr = new FileResource();
        totalBirths(fr);
    }
    public int getRank(int year, String name, String gender) {
        String fileName1 = "yob" + Integer.toString(year) + ".csv";
        FileResource fr = new FileResource("F:\\Mine\\Coursera\\Java Programming Solving Problems with Software\\Java Programs Duke\\BabyNames\\us_babynames_by_year\\" + fileName1);
        int fRank = 0;
        int mRank = 0;
        for(CSVRecord rec : fr.getCSVParser(false)) {
            String fName = rec.get(0);
            String fGender = rec.get(1);
            int numBorn = Integer.parseInt(rec.get(2));
            if(fGender.equals("F")) {
                fRank++;
                if(gender.equals(fGender) && name.equals(fName)) {
                    return fRank;
                }
            }
            else if(fGender.equals("M")){
                mRank++;
                if(gender.equals(fGender) && name.equals(fName)) {
                    return mRank;
                }
            }
            
        }
        return -1;
    }
    public void testGetRank() {
        int rank = getRank(1971, "Frank", "M");
        System.out.println("rank = " + rank);
    }
    public String getName(int year, int rank, String gender) {
        String fileName1 = "yob" + Integer.toString(year) + ".csv";
        FileResource fr = new FileResource("F:\\Mine\\Coursera\\Java Programming Solving Problems with Software\\Java Programs Duke\\BabyNames\\us_babynames_by_year\\" + fileName1);
        int fRank = 0;
        int mRank = 0;
        for(CSVRecord rec : fr.getCSVParser(false)) {
            String fName = rec.get(0);
            String fGender = rec.get(1);
            int numBorn = Integer.parseInt(rec.get(2));
            if(fGender.equals("F")) {
                fRank++;
                if(gender.equals(fGender) && rank == fRank) {
                    return fName;
                }
            }
            else if(fGender.equals("M")){
                mRank++;
                if(gender.equals(fGender) && rank == mRank) {
                    return fName;
                }
            }
        }
        return "NO NAME";
    }
    public void testGetName() {
        String name = getName(1982, 450, "M");
        System.out.println("name = " + name);
    }
    public void whatIsNameInYear(String name, int year, int newYear, String gender) {
        int rank = getRank(year, name, gender);
        String newName = getName(newYear, rank, gender);
        System.out.println(name + " born in " + year + " would be " + newName +
                            " if she was born in " + newYear + ".");
    }
    public void testWhatIsNameInYear() {
        whatIsNameInYear("Owen", 1974, 2014, "M");
    }
    public int yearOfHighestRank(String name, String gender) {
        int yearOfHighestRank = -1;
        int highestRank = 1000000000;
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            String fileName = f.getName();
            int year = Integer.parseInt(fileName.substring(3, 7));
            int rank = getRank(year, name, gender);
            if(rank != -1 && rank < highestRank) {
                highestRank = rank;
                yearOfHighestRank = year;
            }
        }
        return yearOfHighestRank;
    }
    public void testYearOfHighestRank() {
        int year = yearOfHighestRank("Genevieve", "F");
        System.out.println("Year of Highest Rank = " + year);
    }
    public double getAverageRank(String name, String gender) {
        double averageRank = -1;
        double sumRank = 0.0;
        int count = 0;
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            count++;
            String fileName = f.getName();
            int year = Integer.parseInt(fileName.substring(3, 7));
            int rank = getRank(year, name, gender);
            if(rank != -1) {
                sumRank += rank;
            }
        }
        if(sumRank != 0){
            averageRank = sumRank / count;
        }
        return averageRank;
    }
    public void testGetAverageRank() {
        double avgRank = getAverageRank("Robert", "M");
        System.out.println("average rank = " + avgRank);
    }
    public int getTotalBirthsRankedHigher(int year, String name, String gender) {
        int rank = getRank(year, name, gender);
        int fRank = 0;
        int mRank = 0;
        int totalBirthRank = 0;
        FileResource fr = new FileResource();
        for(CSVRecord rec : fr.getCSVParser(false)) {
            String fName = rec.get(0);
            String fGender = rec.get(1);
            int numBorn = Integer.parseInt(rec.get(2));
            if(fGender.equals("F")) {
                fRank++;
                if(gender.equals(fGender) && fRank < rank) {
                    totalBirthRank += numBorn;
                }
            }
            else if(fGender.equals("M")) {
                mRank++;
                if(gender.equals(fGender) && mRank < rank) {
                    totalBirthRank += numBorn;
                }
            }
        }
        return totalBirthRank;
    }
    public void testGetTotalBirthsRankedHigher() {
        int totalNumBorn = getTotalBirthsRankedHigher(1990, "Drew", "M");
        System.out.println("total birth ranked higher = " + totalNumBorn);
    }
}
