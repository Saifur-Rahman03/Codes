
/**
 * Write a description of DistanceFilter here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class DistanceFilter implements Filter
{
    private Location location;
    private double maxDist;
    
    public DistanceFilter(Location loc, double max) {
        location = loc;
        maxDist = max;
    }
    
    public String getName() {
        return "Distance";
    }
    
    public boolean satisfies(QuakeEntry qe) {
        if(qe.getLocation().distanceTo(location) <= maxDist) {
            return true;
        }
        return false;
    }
}
