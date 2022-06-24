
/**
 * Write a description of AllCodonsWithLogical here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class AllCodonsWithLogical {
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
    public String findGene(String dna) {
        int startIndex = dna.indexOf("ATG");
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
    public void testGene() {
        String dna = "CAGATGGTATTAGGTTGAGGTTAAAGTTAGCGT";
        System.out.println("dna: " + dna);
        String gene = findGene(dna);
        System.out.println("gene: " + gene);
    }
}
