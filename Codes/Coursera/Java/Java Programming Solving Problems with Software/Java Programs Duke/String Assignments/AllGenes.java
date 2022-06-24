
/**
 * Write a description of AllGenes here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class AllGenes {
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
    public void printAllGenes(String dna) {
        int startIndex = 0;
        while(true) {
            String currGene = findGene(dna, startIndex);
            if(currGene.isEmpty()) {
                break;
            }
            System.out.println(currGene);
            startIndex = dna.indexOf(currGene, startIndex) + 
                            currGene.length();
        }
    }
    public void testOn(String dna) {
        System.out.println("Testing printAllGenes on: " + dna);
        printAllGenes(dna);
    }
    public void test() {
        testOn("ATGATCTAATTTTATATGCTGCAACGGTGAAGAATGCGTACGTGA");
        testOn("");
        testOn("ATGTAAATGTGAATGTAG");
    }
}
