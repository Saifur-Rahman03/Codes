
/**
 * Write a description of WebLinksManipulation here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import edu.duke.URLResource;
public class WebLinksManipulation {
    public void findYouTubeUrl() {
        URLResource ur = new URLResource
        ("https://www.dukelearntoprogram.com//course2/data/manylinks.html");
        for(String s: ur.words()) {
            //System.out.println(s);
            int index = s.indexOf("youtube");
            if(index != -1) {
                int start = s.lastIndexOf("\"", index);
                int end = s.indexOf("\"", index);
                String str = s.substring(start + 1, end);
                System.out.println(str);
            }
        }
    }
}
