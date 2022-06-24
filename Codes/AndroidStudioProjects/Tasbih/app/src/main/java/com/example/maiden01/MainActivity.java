package com.example.maiden01;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Handler;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    int count = 0, tasbih = 0;
    private Button tapButton, resetButton;
    private TextView textView1, textView2, textView3, textView4;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tapButton = findViewById(R.id.tapButtonID);
        resetButton = findViewById(R.id.resetButtonID);
        textView1 = findViewById(R.id.textViewID1);
        textView2 = findViewById(R.id.textViewID2);
        textView3 = findViewById(R.id.textViewID3);
        textView4 = findViewById(R.id.textViewID4);

        Handler handler = new Handler();
        tapButton.setOnClickListener(handler);
        resetButton.setOnClickListener(handler);

    }

    class Handler implements View.OnClickListener{
        @Override
        public void onClick(View v) {
            if (v.getId() == R.id.tapButtonID) {
                count++;
                if (count <= 33) {
                    textView1.setText("SUBHANALLAH = " + count + " times.");
                } else if (count > 33 && count <= 66) {
                    textView2.setText("ALHAMDULILLAH = " + (count - 33) + " times.");
                } else if (count > 66 && count <= 100) {
                    textView3.setText("ALLAHU AKBAR = " + (count - 66) + " times\n.");
                }
                if (count >= 100) {
                    tasbih++;
                    count = 0;
                    textView1.setText("SUBHANALLAH = " + count + " times.");
                    textView2.setText("ALHAMDULILLAH = " + count + " times.");
                    textView3.setText("ALLAHU AKBAR = " + count + " times.\n");
                }
                textView4.setText("\nTasbih = " + tasbih + " times.\n");
            }
            if(v.getId() == R.id.resetButtonID){
                count = 0;
                tasbih = 0;
                textView1.setText("SUBHANALLAH = " + count + " times.");
                textView2.setText("ALHAMDULILLAH = " + count + " times.");
                textView3.setText("ALLAHU AKBAR = " + count + " times.\n");
                textView4.setText("\nTasbih = " + tasbih + " times.\n");
                Toast toast = Toast.makeText(MainActivity.this, "Data have been reset", Toast.LENGTH_SHORT);
                toast.setGravity(Gravity.CENTER, 0, 0);
                toast.show();

            }
        }
    }
}
