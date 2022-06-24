import java.util.*;
import edu.duke.*;
import java.io.File;

public class VigenereBreaker {
    public String sliceString(String message, int whichSlice, int totalSlices) {
        //REPLACE WITH YOUR CODE
        StringBuilder slicedString = new StringBuilder();
        for(int i = whichSlice; i < message.length(); i += totalSlices) {
            char ch = message.charAt(i);
            slicedString.append(ch);
        }
        return slicedString.toString();
    }

    public int[] tryKeyLength(String encrypted, int klength, char mostCommon) {
        int[] key = new int[klength];
        CaesarCracker cc = new CaesarCracker(mostCommon);
        for(int i = 0; i < klength; i++) {
            String s = sliceString(encrypted, i, klength);
            int k = cc.getKey(s);
            key[i] = k;
        }
        //WRITE YOUR CODE HERE
        return key;
    }

    public void breakVigenere () {
        //WRITE YOUR CODE HERE
        HashMap<String, HashSet<String>> languages = new HashMap<String, HashSet<String>>();
        FileResource fr = new FileResource();
        String encrypted = fr.asString();
        int klength = 4;
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            String fileName = f.getName();
            //String source = "F:\\Mine\\Coursera\\Java Programming and Software Engineering Fundamentals\\Java Programming Arrays, Lists, Structured Data\\Codes\\VigenereProgram\\dictionaries";
            FileResource dicfr = new FileResource(f);
            HashSet<String> dic = new HashSet<String>();
            dic = readDictionary(dicfr);
            languages.put(fileName, dic);
        }
        breakForAllLangs(encrypted, languages);
    }
    
    public HashSet<String> readDictionary(FileResource fr) {
        HashSet<String> dic = new HashSet<String>();
        for(String s : fr.lines()) {
            s = s.toLowerCase();
            dic.add(s);
        }
        return dic;
    }
    
    public int countWords(String message, HashSet<String> dic) {
        int count = 0;
        for(String s : message.split("\\W+")) {
            s = s.toLowerCase();
            if(dic.contains(s)) {
                count++;
            }
        }
        return count;
    }
    
    public String breakForLanguage(String encrypted, HashSet<String> dic) {
        String decrypted = "";
        int highestCount = -1;
        int keyLength = -1;
        for(int k = 1; k <= 100; k++) {
            int[] key = new int[k];
            char mostCommon = mostCommonCharIn(dic);
            key = tryKeyLength(encrypted, k, mostCommon);
            VigenereCipher vc = new VigenereCipher(key);
            String message = vc.decrypt(encrypted);
            int count = countWords(message, dic);
            if(count > highestCount) {
                highestCount = count;
                decrypted = message;
                keyLength = key.length;
            }
        }
        //System.out.println("valid words: " + highestCount);
        //System.out.println("key length: " + keyLength);
        return decrypted;
    }
    
    public char mostCommonCharIn(HashSet<String> dic) {
        char mostCommon = ' ';
        int[] counts = new int[26];
        String alphabet = "abcdefghijklmnopqrstuvwxyz";
        for(String s : dic) {
            for(int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                int idx = alphabet.indexOf(c);
                if(idx != -1) {
                    counts[idx]++;                   
                }
            }
        }
        int highest = -1;
        int highIdx = -1;
        for(int i = 0; i < counts.length; i++) {
            if(counts[i] > highest) {
                highest = counts[i];
                highIdx = i;
            }
        }
        mostCommon = alphabet.charAt(highIdx);
        return mostCommon;
    }
    
    public void breakForAllLangs(String encrypted, HashMap<String, HashSet<String>> languages) {
        int highestCount = -1;
        String language = "";
        String decrypted = "";
        HashSet<String> dic = new HashSet<String>();

        for(String s : languages.keySet()) {
            HashSet<String> dic2 = new HashSet<String>();
            dic2 = languages.get(s);
            String language2 = "";
            language2 = s;
            int count = countWords(encrypted, dic2);
            if(count > highestCount) {
                highestCount = count;
                dic = dic2;
                language = language2;
            }
        }
        String d = breakForLanguage(encrypted, dic);
        decrypted = d;
        System.out.println(language);
        for(int i = 0; i < decrypted.length(); i++) {
            System.out.print(decrypted.charAt(i));
        }
    }
}
