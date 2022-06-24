
/**
 * Write a description of AllCodons here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class AllCodons {
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
         return dnaStr.length();
    }
    public String findGene(String dna) {
        int startIndex = dna.indexOf("ATG");
        if(startIndex == -1) {
            return "";
        }
        int taaIndex = findStopCodon(dna, startIndex, "TAA");
        int tgaIndex = findStopCodon(dna, startIndex, "TGA");
        int tagIndex = findStopCodon(dna, startIndex, "TAG");
        int tempIndex = Math.min(taaIndex, tgaIndex);
        int minIndex = Math.min(tempIndex, tagIndex);
        if(minIndex == dna.length()) {
            return "";
        }
        return dna.substring(startIndex, minIndex + 3);
    }
    public void testGene() {
        String dna = "CAGATGGTATTAGGTTGAGGTTAAAGTTAGCGT";
        System.out.println("dna: " + dna);
        String gene = findGene(dna);
        System.out.println("gene: " + gene);
    }
}
