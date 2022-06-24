
/**
 * Write a description of CSVMinAssignment here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import edu.duke.*;
import org.apache.commons.csv.*;
import java.io.*;

public class CSVMinAssignment {
    public CSVRecord getColdestOfTwo(CSVRecord currentRow, 
                                        CSVRecord lowestSoFar) {
        if(lowestSoFar == null) {
            lowestSoFar = currentRow;
        }
        else {
            double currentTemp = Double.parseDouble(currentRow.get("TemperatureF"));
            double lowestTemp = Double.parseDouble(lowestSoFar.get("TemperatureF"));
            if(currentTemp != -9999 && currentTemp < lowestTemp) {
                lowestSoFar = currentRow;
            }
        }
        return lowestSoFar;
    }
    public CSVRecord getLowestOfTwo(CSVRecord currentRow, 
                                        CSVRecord lowestSoFar) {
        double currentTemp;
        double lowestTemp;
        String current = currentRow.get("Humidity");
        if(lowestSoFar == null) {
            lowestSoFar = currentRow;
            String lowest = lowestSoFar.get("Humidity");
        }
        else {
            if(current.equals("N/A")){
                currentTemp = 100.0;
            }
            else {
                currentTemp = Double.parseDouble(currentRow.get("Humidity"));
            }
            lowestTemp = Double.parseDouble(lowestSoFar.get("Humidity"));
            if(currentTemp < lowestTemp) {
                lowestSoFar = currentRow;
            }
            
        }
        return lowestSoFar;
    }
    public CSVRecord coldestHourInFile(CSVParser parser) {
        CSVRecord coldestSoFar = null;
        for(CSVRecord currentRow : parser) {
            coldestSoFar = getColdestOfTwo(currentRow, coldestSoFar);
        }
        return coldestSoFar;
    }
    public void testColdestHourInFile() {
        FileResource fr = new FileResource();
        CSVRecord coldest = coldestHourInFile(fr.getCSVParser());
        System.out.println("Coldest Temp was " + coldest.get("TemperatureF") + 
                            " at " + coldest.get("TimeEDT"));
    }
    public File fileWithColdestTemperature() {
        File coldestFile = null;
        CSVRecord coldestSoFar = null;
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            FileResource fr = new FileResource(f);
            CSVRecord currentRow = coldestHourInFile(fr.getCSVParser());
            if(coldestSoFar == null) {
                coldestSoFar = currentRow;
                }
                else {
                    double currentTemp = Double.parseDouble(currentRow.get("TemperatureF"));
                    double coldestTemp = Double.parseDouble(coldestSoFar.get("TemperatureF"));
                    if(currentTemp != -9999 && currentTemp < coldestTemp) {
                        coldestSoFar = currentRow;
                        coldestFile = f;
                    }   
                }
            }
        return coldestFile;
    }
    public void testFileWithColdestTemperature() {
        File coldestFile = fileWithColdestTemperature();
        System.out.println("coldest day was in file " + coldestFile.getName());
        FileResource fr = new FileResource(coldestFile);
        CSVRecord coldest = coldestHourInFile(fr.getCSVParser());
        System.out.println("Coldest Temp on that day was " + coldest.get("TemperatureF"));
        System.out.println("All the temperatures on the coldest day were: ");
        for(CSVRecord row : fr.getCSVParser()) {
            System.out.println(row.get("DateUTC") + ":  " + 
                    Double.parseDouble(row.get("TemperatureF")));
        }
    }
     public CSVRecord lowestHumidityInFile(CSVParser parser) {
        CSVRecord lowestHum = null;
        for(CSVRecord row : parser) {
            lowestHum = getLowestOfTwo(row, lowestHum);
        }
        return lowestHum;
    }
    public void testLowestHumidityInFile() {
        FileResource fr = new FileResource();
        CSVParser parser = fr.getCSVParser();
        CSVRecord csv = lowestHumidityInFile(parser);
        System.out.println("Lowest Humidity was " + csv.get("Humidity") + 
                            " at " + csv.get("DateUTC"));
    }
    public CSVRecord lowestHumidityInManyFiles() {
        CSVRecord lowestHum = null;
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            //System.out.println(f.getName());
            FileResource fr = new FileResource(f);
            CSVRecord currentHum = lowestHumidityInFile(fr.getCSVParser());
            lowestHum = getLowestOfTwo(currentHum, lowestHum);
        }
        return lowestHum;
    }
    public void  testLowestHumidityInManyFiles() {
        CSVRecord lowest = lowestHumidityInManyFiles();
        System.out.println("Lowest Humidity was " + lowest.get("Humidity") +
            " at " + lowest.get("DateUTC"));
    }
    public double averageTemperatureInFile(CSVParser parser) {
        double avgTemp = 1.0;
        double sum = 0.0;
        int count = 0;
        for(CSVRecord row : parser) {
            double temp = Double.parseDouble(row.get("TemperatureF"));
            sum += temp;
            count++;
        }
        avgTemp = sum / count;
        return avgTemp;
    }
    public void testAverageTemperatureInFile() {
        FileResource fr = new FileResource();
        double avg = averageTemperatureInFile(fr.getCSVParser());
        System.out.println("Average temp in this file is " + avg);
    }
    public double averageTemperatureWithHighHumidityInFile(CSVParser parser, 
                                                                int value) {
        double avgTemp = 1.0;
        double sum = 0.0;
        int count = 0;
        for(CSVRecord row : parser) {
            double temp = Double.parseDouble(row.get("TemperatureF"));
            double humidity = Double.parseDouble(row.get("Humidity"));
            if(humidity >= value) {
                sum += temp;
                count++;
            }
        }
        if(count == 0){
            return -1;
        }
        else{
            avgTemp = sum / count;
            return avgTemp;
        }
    }
    public void testAverageTemperatureWithHighHumidityInFile() {
        FileResource fr = new FileResource();
        double avg = averageTemperatureWithHighHumidityInFile(fr.getCSVParser(), 80);
        if(avg == -1) {
            System.out.println("No temperatures with that humidity");
        }
        else {
            System.out.println("Average temp in this file is " + avg);            
        }
    }
}
