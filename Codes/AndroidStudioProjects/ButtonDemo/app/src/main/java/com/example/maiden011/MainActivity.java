package com.example.maiden011;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity{

    private Button LoginButton, LogoutButton;
    private TextView textView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        LoginButton = findViewById(R.id.LoginButtonID);
        LogoutButton = findViewById(R.id.LogoutButtonID);
        textView = findViewById(R.id.TextViewID);
    }
    public void showMessage (View v){
        if(v.getId() == R.id.LoginButtonID) {
            Log.d("tag", "Login Button is clicked");
        }
        if(v.getId() == R.id.LogoutButtonID) {
            Log.d("tag", "Logout Button is clicked");
        }
    }
}

