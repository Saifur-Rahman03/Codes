
/**
 * Write a description of FindGeneSampleAndTest here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class FindGeneSampleAndTest {
    public String findGeneSample(String dna) {
        //start codon ATG
        //stop codon TAA
        String result = "";
        int startIndex = dna.indexOf("ATG");
        if(startIndex == -1) {
            return "not found";
        }
        int stopIndex = dna.indexOf("TAA", startIndex + 3);
        if(stopIndex == -1) {
            return "not found";
        }
        if((startIndex - stopIndex) % 3 == 0) { //1 codon = 3 nucleotide 
            result = dna.substring(startIndex, stopIndex + 3);            
        }
        else{
            result = "not found";
        }
        
        return result;
    }
    public void testGeneSample() {
        String dna = "ATTGATGATATCGCGTGTGTGACGTTAATGCAGTCGC";
        System.out.println("Dna: " + dna);
        String gene = findGeneSample(dna);
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATATCGCGTGTGTGACGTTAATGCAGTCGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna);
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATATCGCGTGTGTGACGTTGCAGTCGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna);
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATGATCGCGTGTGTGACGTTAATGCATGTAAGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna);
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATGATATCGCGTGTGGACGTTAATGCAGTCGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna);
        System.out.println("Gene: " + gene);
    }
}
