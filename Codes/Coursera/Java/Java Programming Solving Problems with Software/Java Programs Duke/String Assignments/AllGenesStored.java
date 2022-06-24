
/**
 * Write a description of AllGenesStored here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;

public class AllGenesStored {
    public int findStopCodon(String dnaStr, 
                             int startIndex, 
                             String stopCodon) {
         int currIndex = dnaStr.indexOf(stopCodon, startIndex + 3);
         while(currIndex != -1) {
             if((currIndex - startIndex) % 3 == 0) {
                 return currIndex;
             }
             else {
                 currIndex = dnaStr.indexOf(stopCodon, currIndex + 1);
             }
         }
         return -1;
    }
    public String findGene(String dna, int where) {
        int startIndex = dna.indexOf("ATG", where);
        if(startIndex == -1) {
            return "";
        }
        int taaIndex = findStopCodon(dna, startIndex, "TAA");
        int tgaIndex = findStopCodon(dna, startIndex, "TGA");
        int tagIndex = findStopCodon(dna, startIndex, "TAG");
        //int tempIndex = Math.min(taaIndex, tgaIndex);
        //int minIndex = Math.min(tempIndex, tagIndex);
        int minIndex = 0;
        if(taaIndex == -1 ||
            (tgaIndex != - 1 && tgaIndex < taaIndex)) {
             minIndex = tgaIndex;   
            }
            else {
                minIndex = taaIndex;
            }
        if(minIndex == -1 ||
            (tagIndex != -1 && tagIndex < minIndex)) {
             minIndex = tagIndex;   
            }
        
        if(minIndex == -1) {
            return "";
        }
        return dna.substring(startIndex, minIndex + 3);
    }
    public StorageResource getAllGenes(String dna) {
        StorageResource geneList = new StorageResource();
        
        int startIndex = 0;
        while(true) {
            String gene = findGene(dna, startIndex);
            if(gene.isEmpty()) {
                break;
            }
            geneList.add(gene);
            startIndex = dna.indexOf(gene, startIndex) + gene.length();
        }
        return geneList;
    }
    public double cgRatio(String dna) {
        double r = 0;
        int cgCount = 0;
        for(int i = 0; i < dna.length(); i++) {
            if(dna.charAt(i) == 'C' || dna.charAt(i) == 'G') {
                cgCount++;
            }
        }
        r = (1.0 * cgCount) / dna.length();
        return r;
    }
    public int countCTG(String dna) {
        int count = 0;
        int startIndex = 0;
        int i = 0;
        while(true) {
            i = dna.indexOf("CTG", startIndex);
                
            if(i == -1) {
                break;
            }
           // if((i % 3) == 0){
              count++;
            
            startIndex = i + 3;
        }
        return count;
    }
    public void processGenes(StorageResource sr) {
        int longGene = 0;
        int longestGene = 0;
        int countCg = 0;
        int numGene = 0;
        int codonCTG;
        for(String dna: sr.data()) {
            dna = dna.toUpperCase();
            System.out.println("DNA: " + dna);
            longGene = 0;
            numGene = 0;
            countCg = 0;
            longestGene = 0;
            codonCTG = countCTG(dna);
            StorageResource genes = getAllGenes(dna);
            for(String g : genes.data()) {
                numGene++;
                if(g.length() > 60) {
                    longGene++;
                   // System.out.println("LG: " + g);
                }
                double cgRatio = cgRatio(g);
                if(cgRatio > 0.35) {
                    countCg++;
                    //System.out.println("C-G: " + g);
                }
                if(g.length() > longestGene) {
                    longestGene = g.length();
                }
            }
            System.out.println("number of Genes: " + numGene);
            System.out.println("number of long Genes: " + longGene);
            System.out.println("number of Genes with C-G-ratio > 0.35: " +
                                countCg);
            System.out.println("Longest Gene length: " + longestGene);
            System.out.println("CTG codon: " + codonCTG);
        }
    }
    public void testProcessGenes() {
        StorageResource sr = new StorageResource();
        //        01234567890123456789012345678901234
        //sr.add("CAAATGCTGTGCTAACGTATGTGAATGCGTTGTAGTTAG");
        //sr.add("ATGTAAATGTGAATGTGA");
        //sr.add("ATGCTGTGCTGAATGTGCCGTTCGTAAA");
        //sr.add("ATGTACTAGATGTACCATTGC");
        FileResource fr = new FileResource("GRch38dnapart.fa");
        String dna = fr.asString();
        sr.add(dna);
        
        processGenes(sr);
    }
    public void testOn(String dna) {
        System.out.println("Testing getAllGenes on: " + dna);
        StorageResource genes = getAllGenes(dna);
        System.out.println("Genes: ");
        for(String g : genes.data()) {
            System.out.println(g);
        }
        double cgRatio = cgRatio(dna);
        System.out.println("CG Ratio: " + cgRatio);
        int codonCTG = countCTG(dna);
        System.out.println("CTG codons: " + codonCTG);
    }
    public void test() {
        //      012345678901234567890123456789012345678901234  
        testOn("ATGATCTAACTGTATATGCTGCAACGGTGCTGAATGCGTACGTGA");
        testOn("");
        testOn("ATGTAAATGTGAATGCTGCTGTAG");
        testOn("");
    }
}
