
/**
 * Write a description of FindGeneSampleAndTest2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class FindGeneSampleAndTest2 {
    public void testGeneSample() {
        String dna = "ATTGATGATATCGCGTGTGTGACGTTAATGCAGTCGC";
        System.out.println("Dna: " + dna);
        String gene = findGeneSample(dna, "ATG", "taa");
        System.out.println("Gene: " + gene);
        
        dna = "attgatgatatcgcgtgtgtgacgttaatgcagtcgc";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna, "ATG", "TAA");
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATATCGCGTGTGTGACGTTGCAGTCGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna, "ATG", "taa");
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATGATCGCGTGTGTGACGTTAATGCATGTAAGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna, "ATG", "TAA");
        System.out.println("Gene: " + gene);
        
        dna = "ATTGATGATATCGCGTGTGGACGTTAATGCAGTCGC";
        System.out.println("Dna: " + dna);
        gene = findGeneSample(dna, "atg", "taa");
        System.out.println("Gene: " + gene);
    }
    public String findGeneSample(String dna, String startCodon, String stopCodon) {
        int flag = checkCase(dna, startCodon, stopCodon);
        if(flag == 1) {
            startCodon = startCodon.toUpperCase();
            stopCodon = stopCodon.toUpperCase();        
        }
        else {
            startCodon = startCodon.toLowerCase();
            stopCodon = stopCodon.toLowerCase();
        }
        String result = "";
        int startIndex = dna.indexOf(startCodon);
        if(startIndex == -1) {
            return "";
        }
        int stopIndex = dna.indexOf(stopCodon, startIndex + 3);
        if(stopIndex == -1) {
            return "";
        }
        if((startIndex - stopIndex) % 3 == 0) { //1 codon = 3 nucleotide 
            result = dna.substring(startIndex, stopIndex + 3);            
        }
        else{
            result = "";
        }
        return result;
    }

    public int checkCase(String dna, String startCodon, String stopCodon) {
        int flag = 0;
        for(int i = 0; i < dna.length(); i++) {
            char c = dna.charAt(i);
            if(Character.isUpperCase(c) == false) {
                flag = 0;
                break;
            }
            else {
                flag = 1;
            }
        }
        return flag;
    }
}
