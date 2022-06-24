
/**
 * Write a description of SImpleCSV here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import edu.duke.*;
import org.apache.commons.csv.*;

public class SImpleCSV {
    public void readFood() {
        FileResource fr = new FileResource();
        CSVParser parser = fr.getCSVParser();
        for(CSVRecord record : parser) {
            System.out.print(record.get("Name") + " ");
            System.out.print(record.get("Favorite Food") + " ");
            System.out.println(record.get("Favorite Color"));            
        }       
        
    }
}
