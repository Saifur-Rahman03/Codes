package com.example.edittextdemo;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    private EditText editText1, editText2;
    private Button addButton, subButton;
    private TextView textView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editText1 = findViewById(R.id.EditText1ID);
        editText2 = findViewById(R.id.EditText2ID);
        addButton = findViewById(R.id.Button1ID);
        subButton = findViewById(R.id.Button2ID);
        textView = findViewById(R.id.TextViewID);

        addButton.setOnClickListener(this);
        subButton.setOnClickListener(this);


    }

    @Override
    public void onClick(View v) {
        try {
            String num1 = editText1.getText().toString();
            String num2 = editText2.getText().toString();

            double n1 = Double.parseDouble(num1);
            double n2 = Double.parseDouble(num2);

            if (v.getId() == R.id.Button1ID) {
                double sum = n1 + n2;
                textView.setText("Result : " + sum);
            }
            if (v.getId() == R.id.Button2ID) {
                double sub = n1 - n2;
                textView.setText("Result : " + sub);
            }
        }catch (Exception e){
            Toast.makeText(MainActivity.this, "Please insert numbers", Toast.LENGTH_SHORT).show();
        }


    }
}
