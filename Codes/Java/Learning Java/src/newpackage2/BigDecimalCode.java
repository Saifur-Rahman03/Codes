/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package newpackage2;

import java.math.BigDecimal;

/**
 *
 * @author hp
 */
public class BigDecimalCode {
    public static void main (String[] args) {
        BigDecimal a = new BigDecimal(1.0);
        BigDecimal b = new BigDecimal (3);
        BigDecimal c = a.divide(b, 20, BigDecimal.ROUND_HALF_UP);
        System.out.println(c);
    }
}
