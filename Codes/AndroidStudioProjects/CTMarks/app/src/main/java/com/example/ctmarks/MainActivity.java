package com.example.ctmarks;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import static java.lang.StrictMath.abs;
import static java.lang.StrictMath.round;

public class MainActivity extends AppCompatActivity {

    private EditText editText1, editText2, editText3, editText4;
    private Button avgButton;
    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editText1 = findViewById(R.id.EditText1ID);
        editText2 = findViewById(R.id.EditText2ID);
        editText3 = findViewById(R.id.EditText3ID);
        editText4 = findViewById(R.id.EditText4ID);
        avgButton = findViewById(R.id.Button1ID);
        textView = findViewById(R.id.TextViewID);
        Handler handler = new Handler();
        avgButton.setOnClickListener(handler);
    }

    class Handler implements View.OnClickListener {

        @Override
        public void onClick(View v) {
            String CT1 = editText1.getText().toString();
            String CT2 = editText2.getText().toString();
            String CT3 = editText3.getText().toString();
            String CT4 = editText4.getText().toString();

            double c1 = Double.parseDouble(CT1);
            double c2 = Double.parseDouble(CT2);
            double c3 = Double.parseDouble(CT3);
            double c4 = Double.parseDouble(CT4);
            if(c1 > 20 || c2 > 20 || c3 > 20 || c4 > 20)
                Toast.makeText(MainActivity.this, "Error Input, Try Again", Toast.LENGTH_SHORT).show();

            else {
                double temp;
                temp = c1;
                if(c2 < temp)
                    temp = c2;
                if(c3 < temp)
                    temp = c3;
                if(c4 < temp)
                    temp = c4;

                double average = (c1 + c2 + c3 + c4 - temp) / 3;
                textView.setText("Average CT marks: " +  round(average));
            }
        }
    }
}