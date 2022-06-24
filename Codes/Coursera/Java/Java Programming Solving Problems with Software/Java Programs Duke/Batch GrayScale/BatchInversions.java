
/**
 * Write a description of BatchInversions here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.*;
import edu.duke.*;

public class BatchInversions {
    public ImageResource makeInversion(ImageResource inImage) {
        ImageResource outImage = new ImageResource(inImage.getWidth(), inImage.getHeight());
        for(Pixel pixel : outImage.pixels()) {
            Pixel inPixel = inImage.getPixel(pixel.getX(), pixel.getY());
            int red = inPixel.getRed();
            int green = inPixel.getGreen();
            int blue = inPixel.getBlue();
            pixel.setRed(255 - red);
            pixel.setGreen(255 - green);
            pixel.setBlue(255 - blue);
        }
        return outImage;
    }
    public void saveAndDraw() {
        DirectoryResource dr = new DirectoryResource();
        for(File f : dr.selectedFiles()) {
            ImageResource inImage = new ImageResource(f);
            ImageResource invertedImage = makeInversion(inImage);
            String fName = inImage.getFileName();
            System.out.println(fName);
            String newName = "inverted-" + fName;
            System.out.println(newName);
            invertedImage.setFileName(newName);
            invertedImage.save();
            invertedImage.draw();
        }
    }
}
