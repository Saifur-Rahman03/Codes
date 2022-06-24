
/**
 * Write a description of PhraseFilter here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class PhraseFilter implements Filter
{
    private String where;
    private String title;
    
    public PhraseFilter(String tit, String wh) {
        title = tit;
        where = wh;
    }
    
    public String getName() {
        return "Phrase";
    }
    
    public boolean satisfies(QuakeEntry qe) {
        if(where.equals("start") && qe.getInfo().startsWith(title)) {
            return true;
        }
        else if(where.equals("end") && qe.getInfo().endsWith(title)) {
            return true;
        }
        else if(where.equals("any") && qe.getInfo().indexOf(title) != -1) {
            return true;
        }
        return false;
    }
}
