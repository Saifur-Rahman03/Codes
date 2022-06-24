
/**
 * Write a description of CSVAssignment here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import edu.duke.*;
import org.apache.commons.csv.*;

public class CSVAssignment {
    public void tester() {
        FileResource fr = new FileResource();
        CSVParser parser = fr.getCSVParser();
        countryInfo(parser, "Nauru");
        parser = fr.getCSVParser();
        listExportersTwoProducts(parser, "cotton", "flowers");
        parser = fr.getCSVParser();
        int count = numberOfExporters(parser, "cocoa");
        System.out.println(count);
        parser = fr.getCSVParser();
        bigExporters(parser, "$999,999,999,999");
    }
    public void countryInfo(CSVParser parser, String country) {
        for(CSVRecord record : parser) {
            String matchCountry = record.get("Country");
            if(country.equals(matchCountry)) {
                String exports = record.get("Exports");
                String value = record.get("Value (dollars)");
                System.out.println(country + ": " + exports + ": " + value);
            }
        }
    }
    public void listExportersTwoProducts(CSVParser parser, String exportItem1,
                                            String exportItem2) {
        for(CSVRecord record : parser) {
            String exports = record.get("Exports");
            if(exports.contains(exportItem1) && exports.contains(exportItem2)) {
                String country = record.get("Country");
                System.out.println(country);
            }
        }
    }
    public int numberOfExporters(CSVParser parser, String exportItem) {
        int count = 0;
        for(CSVRecord record : parser) {
            String exports = record.get("Exports");
            if(exports.contains(exportItem)) {
                count++;
            }
        }
        
        return count;
    }
    public void bigExporters(CSVParser parser, String amount) {
        for(CSVRecord record : parser) {
            String value = record.get("Value (dollars)");
            int val = value.length();
            int amn = amount.length();
            if(val > amn + 1) {
                String country = record.get("Country");
                System.out.println(country + " " + value);
            }
        }
    }
}
