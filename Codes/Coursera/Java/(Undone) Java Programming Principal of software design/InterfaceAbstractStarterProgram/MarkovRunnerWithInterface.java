
/**
 * Write a description of class MarkovRunner here.
 * 
 * @author Duke Software
 * @version 1.0
 */

import edu.duke.*; 

public class MarkovRunnerWithInterface {
    public void runModel(IMarkovModel markov, String text, int size, int seed) {
        markov.setTraining(text);
        markov.setRandom(seed);
        System.out.println("running with " + markov);
        for(int k=0; k < 3; k++){
            String st= markov.getRandomText(size);
            printOut(st);
        }
    }
    
    public void runMarkov() {
        FileResource fr = new FileResource();
        String st = fr.asString();
        st = st.replace('\n', ' ');
        int size = 200;

        MarkovZero mz = new MarkovZero();
        runModel(mz, st, size, 88);
    
        MarkovOne mOne = new MarkovOne();
        runModel(mOne, st, size, 42);
        
        MarkovModel mThree = new MarkovModel(3);
        runModel(mThree, st, size, 101);
        
        MarkovFour mFour = new MarkovFour();
        runModel(mFour, st, size, 25);
        

    }
    
    public void testHashMap() {
        EfficientMarkovModel meff = new EfficientMarkovModel(5);
        FileResource fr = new FileResource();
        String st = fr.asString();
        st = st.replace('\n', ' ');
        int size = 50;
        meff.buildMap(size);
        meff.printHashMapInfo();
        //runModel(meff, st, size, 615);
    }

    private void printOut(String s){
        String[] words = s.split("\\s+");
        int psize = 0;
        System.out.println("----------------------------------");
        for(int k=0; k < words.length; k++){
            System.out.print(words[k]+ " ");
            psize += words[k].length() + 1;
            if (psize > 60) {
                System.out.println();
                psize = 0;
            }
        }
        System.out.println("\n----------------------------------");
    }
    
}
