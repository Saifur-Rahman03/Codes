package com.example.maiden;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView nameTextView, ageTextView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        nameTextView = findViewById(R.id.nameTextViewID);
        ageTextView = findViewById(R.id.ageTextViewID);
        nameTextView.setText("Saifur Rahman");
        ageTextView.setText("19 years old");
    }
}
