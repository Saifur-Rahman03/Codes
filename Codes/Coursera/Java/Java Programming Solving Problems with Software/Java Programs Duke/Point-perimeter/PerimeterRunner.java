 
import edu.duke.*;
import edu.duke.Point;
import java.io.File;

public class PerimeterRunner {
    
    public static void main (String[] args) {
        PerimeterRunner pr = new PerimeterRunner();
        pr.testPerimeter();
        pr.testPerimeterMultipleFiles();
    }
    public void testPerimeter() {
        FileResource fr = new FileResource();
        Shape s = new Shape(fr);
        double length = getPerimeter(s);
        int numOfPoints = getNumPoints(s);
        double avg = getAverageLength(s);
        double largestSide = getLargestSide(s);
        double largestX = getLargestX(s);
        System.out.println("number of points = " + numOfPoints); 
        System.out.println("perimeter = " + length);
        System.out.println("average = " + avg);
        System.out.println("largest side = " + largestSide);
        System.out.println("largest x = " + largestX);
    }
    public void testPerimeterMultipleFiles() {
        double largestPerim = getLargestPerimeterMultipleFiles();
        File largestFile = getFileWithLargestPerimeter();
        System.out.println("largest perimeter among selected files = "
        + largestPerim);
        System.out.println("largest perimeter file = "
        + largestFile);
    }
    public double getPerimeter (Shape s) {
        double totalPerim = 0;
        Point prevPt = s.getLastPoint();
        for(Point currPt: s.getPoints()) {
            double currDist = prevPt.distance(currPt);
            totalPerim += currDist;
            prevPt = currPt;
        }
        return totalPerim;
    }
    public int getNumPoints(Shape s) {
        int count = 0;
        for(Point pt: s.getPoints()) {
            count++;
        }
        return count;
    }
    public double getAverageLength(Shape s) {
        int count = 0;
        double totalPerim = 0;
        Point prevPt = s.getLastPoint();
        for(Point currPt: s.getPoints()) {
            count++;
            double currDist = prevPt.distance(currPt);
            totalPerim += currDist;
            prevPt = currPt;
        }
        double l = totalPerim / count;
        return l;        
    }
    public double getLargestSide(Shape s) {
        Point prevPt = s.getLastPoint();
        double ls = 0;
        for(Point currPt: s.getPoints()) {
            double currDist = prevPt.distance(currPt);
            if(currDist > ls) {
                ls = currDist;
            }
            prevPt = currPt;
        }
        return ls;
    }
    public double getLargestX(Shape s) {
        Point pt = s.getLastPoint();
        double x = pt.getX();
        for(Point currPt: s.getPoints()) {
            if(currPt.getX() > x) {
                x = currPt.getX();
            }
        }
        return x;
    }
    public void printFileNames() {
        DirectoryResource dr = new DirectoryResource();
        for(File f: dr.selectedFiles()) {
            System.out.println(f);
        }
    }
    public double getLargestPerimeterMultipleFiles() {
        DirectoryResource dr = new DirectoryResource();
        double largestPerim = 0;
        for(File f: dr.selectedFiles()) {
            FileResource fr = new FileResource(f);
            Shape s = new Shape(fr);
            if(getPerimeter(s) > largestPerim){
                largestPerim = getPerimeter(s);
            }
        }
        return largestPerim;
    }
    public File getFileWithLargestPerimeter() {
        DirectoryResource dr = new DirectoryResource();
        double largestPerim = 0;
        File largestFile = null;
        for(File f: dr.selectedFiles()) {
            FileResource fr = new FileResource(f);
            Shape s = new Shape(fr);
            if(getPerimeter(s) > largestPerim){
                largestPerim = getPerimeter(s);
                largestFile = f;
            }
        }
        return largestFile;
    }
}

