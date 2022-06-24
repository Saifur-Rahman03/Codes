
/**
 * Write a description of WordsInFiles here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import edu.duke.*;
import java.io.File;

public class WordsInFiles {
    private HashMap<String, ArrayList<String>> map;
    public WordsInFiles() {
        map = new HashMap<String, ArrayList<String>>();
    }
    private void addWordsFromFile(File f) {
        FileResource fr = new FileResource(f);
        String file = f.getName();
        for(String word : fr.words()) {
            
            if(map.keySet().contains(word)) {
                ArrayList<String> files = new ArrayList<String>();
                files = map.get(word);
                if(files.indexOf(file) == -1) {
                    files.add(file);
                    map.remove(word);
                    map.put(word, files);
                }
            }
            else {
                ArrayList<String> files = new ArrayList<String>();
                files.add(file);
                map.put(word, files);
            }
        }
    }
    public void buildWordFileMap() {
        map.clear();
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            addWordsFromFile(f);
        }
    }
    public int maxNumber() {
        int highest = -1;
        for(String word : map.keySet()) {
            int count = 0;
            ArrayList<String> files = new ArrayList<String>();
            files = map.get(word);
            for(String file: files) {
                count++;
            }
            if(count > highest) {
                highest = count;
            }
        }
        return highest;
    }
    public ArrayList wordsInNumFiles(int number) {
        ArrayList<String> words = new ArrayList<String>();
        ArrayList<String> files = new ArrayList<String>();
        for(String word : map.keySet()) {
            int count = 0;
            files = map.get(word);
            for(String file: files) {
                count++;
            }
            if(count == number) {
                words.add(word);
            }
            files.clear();
        }
        return words;
    }
    public ArrayList printFileNames(String word) {
        for(String w : map.keySet()) {
            if(w.equals(word)) {
                ArrayList<String> files = new ArrayList<String>();
                files = map.get(w);
                return files;
            }
        }
        return null;
    }
    public void tester() {
        buildWordFileMap();
        /*for(String word : map.keySet()) {
            System.out.println(word + ":");
            printFileNames(word);
            if(word.equals("red")) {
                break;
            }
            System.out.println();
        }*/
        int max = maxNumber();
        System.out.println("max number: " + max);
        ArrayList<String> files = new ArrayList<String>();
        //files = wordsInNumFiles(4);
        //for(String w : files) {
        //    System.out.println(w);
        //}
        //System.out.println("size = " + files.size());
        String word = "tree";
        
        files = printFileNames(word);
        //System.out.println("bla bla");
        for(String f : files) {
            System.out.println(f);
        }
            
        
    }
}
