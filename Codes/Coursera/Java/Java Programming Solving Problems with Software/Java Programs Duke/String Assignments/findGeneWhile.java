
/**
 * Write a description of findGeneWhile here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class findGeneWhile {
    public String findGene(String dna) {
        int startIndex = dna.indexOf("ATG");
        int currIndex = dna.indexOf("TAA", startIndex + 1);
        
        while(currIndex != -1) {
            if((currIndex - startIndex) % 3 == 0) {
                return dna.substring(startIndex, currIndex + 3);
            }
            else {
                currIndex = dna.indexOf("TAA", currIndex + 1);
            }
        }
        return "";
    }   
    public void testGeneSample() {
        String dna = "AATGCGTAATTAACG";
        System.out.println(dna);
        String gene = findGene(dna);
        System.out.println(gene);
    }
      
}
