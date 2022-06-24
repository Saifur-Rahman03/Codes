
/**
 * Write a description of DNACodonCount here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;
import edu.duke.*;

public class DNACodonCount {
    private HashMap<String, Integer> codons;
    public DNACodonCount() {
        codons = new HashMap<String, Integer>();
    }
    public void buildCodonMap(int start, String dna) {
        for(int i = start; i < dna.length(); i += 3) {
            String codon = "";
            if((i + 3) < dna.length()) {
                codon = dna.substring(i, i + 3);
            }
            else {
                codon = dna.substring(i, dna.length());
            }
            if(codons.keySet().contains(codon)) {
                codons.put(codon, codons.get(codon) + 1);
            }
            else if(codon.length() == 3) {
                codons.put(codon, 1);
            }
        }
    }
    public String getMostCommonCodon() {
        String commonCodon = "";
        int highestValue = -1;
        for(String codon : codons.keySet()) {
            if(codons.get(codon) > highestValue) {
                highestValue = codons.get(codon);
                commonCodon = codon;
            }
        }
        return commonCodon;
    }
    public void printCodonCounts(int start, int end) {
        for(String codon : codons.keySet()) {
            if(codons.get(codon) >= start && codons.get(codon) <= end) {
                System.out.println(codon + "\t" + codons.get(codon));
            }
        }
        System.out.println();
    }
    public int totalUniqueCodons() {
        return codons.size();
    }
    public void tester() {
        FileResource fr = new FileResource();
        String dna = fr.asString();
        dna = dna.trim();
        dna = dna.toUpperCase();
        System.out.println("starting from 0");
        buildCodonMap(0, dna);
        printCodonCounts(1, 100);
        System.out.println("unique codons = " + codons.size());
        codons.clear();
        System.out.println("starting from 1");
        buildCodonMap(1, dna);
        printCodonCounts(1, 100);
        System.out.println("unique codons = " + codons.size());
        codons.clear();
        System.out.println("starting from 2");        
        buildCodonMap(2, dna);
        printCodonCounts(1, 100);
        System.out.println("unique codons = " + codons.size());
        codons.clear();
    }
}
