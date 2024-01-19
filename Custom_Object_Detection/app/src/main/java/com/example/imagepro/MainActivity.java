package com.example.imagepro;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

import org.opencv.android.OpenCVLoader;

import java.io.IOException;

public class MainActivity extends AppCompatActivity {
    static {
        if(OpenCVLoader.initDebug()){
            Log.d("MainActivity: ","Opencv is loaded");
        }
        else {
            Log.d("MainActivity: ","Opencv failed to load");
        }
    }

    private Button camera_button;
    private Button storage_button;
    private Button vuforia_button;
    private Button predict_button;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        // select device and run
        // we successfully loaded model
        // before next tutorial
        // as we are going to predict in Camera Activity
        // Next tutorial will be about predicting using Interpreter


        camera_button=findViewById(R.id.camera_button);
        camera_button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(MainActivity.this,CameraActivity.class).addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));
            }
        });

        storage_button=findViewById(R.id.storage_prediction);
        storage_button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(MainActivity.this, StoragePredictionActivity.class).addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));
            }
        });

//        vuforia_button=findViewById(R.id.unity_handler);
//        vuforia_button.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View v) {
//                startActivity(new Intent(MainActivity.this, UnityHandlerActivity.class).addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));
//
//            }
//        });

        predict_button=findViewById(R.id.dental_prediction);
        predict_button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(MainActivity.this, PredictionActivity.class).addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


    }
}