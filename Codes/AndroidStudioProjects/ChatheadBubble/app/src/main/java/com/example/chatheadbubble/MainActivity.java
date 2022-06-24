package com.example.chatheadbubble;

import androidx.appcompat.app.AppCompatActivity;

import android.app.NotificationManager;
import android.app.Service;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.provider.Settings;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.nex3z.notificationbadge.NotificationBadge;
import com.txusballesteros.bubbles.BubbleLayout;
import com.txusballesteros.bubbles.BubblesManager;
import com.txusballesteros.bubbles.OnInitializedCallback;

import static com.example.chatheadbubble.R.layout.activity_main;

public class MainActivity extends AppCompatActivity {

    private BubblesManager bubblesManager;

    {
        BubblesManager.Builder builder = new BubblesManager.Builder(this);
        builder.setTrashLayout(R.layout.bubble_remove);
        builder.setInitializationCallback(new OnInitializedCallback() {
            @Override
            public void onInitialized() {
                addNewBubble();
            }
        });
        bubblesManager = builder.build();
    }

    private NotificationBadge mBadge;

    private int MY_PERMISSION = 1000;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(activity_main);
        
        initBubble();

        Button btnAdd = (Button)findViewById(R.id.btnAddBubble);
        btnAdd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                addNewBubble();
            }
        });

        //Check Permission
        if(Build.VERSION.SDK_INT >= 23){
            if(!Settings.canDrawOverlays(MainActivity.this)){
                Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION,
                        Uri.parse("package:"+getPackageName()));
                        startActivityForResult(intent, MY_PERMISSION);
            }
        }
        else{
            Intent intent = new Intent(MainActivity.this, Service.class);
            startService(intent);
        }
    }

    private void initBubble() {
        bubblesManager.initialize();
    }

    private void addNewBubble() {
        BubbleLayout bubbleView = (BubbleLayout) LayoutInflater.from(MainActivity.this)
                .inflate(R.layout.bubble_layout, null);
        mBadge =  (NotificationBadge)bubbleView.findViewById(R.id.count);
        mBadge.setNumber(88);

        bubbleView.setOnBubbleRemoveListener(new BubbleLayout.OnBubbleRemoveListener() {
            @Override
            public void onBubbleRemoved(BubbleLayout bubble) {
                Toast.makeText(MainActivity.this, "Removed", Toast.LENGTH_SHORT).show();
            }
        });
        bubbleView.setOnBubbleClickListener(new BubbleLayout.OnBubbleClickListener() {
            @Override
            public void onBubbleClick(BubbleLayout bubble) {
                Toast.makeText(MainActivity.this, "Clicked", Toast.LENGTH_SHORT).show();
            }
        });
        bubbleView.setShouldStickToWall(true);
        bubblesManager.addBubble(bubbleView, 60, 20);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        bubblesManager.recycle();
    }
}
