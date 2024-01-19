package com.example.imagepro;

import static java.lang.Boolean.TRUE;

import androidx.appcompat.app.AppCompatActivity;
import androidx.cardview.widget.CardView;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

import java.util.ArrayList;

public class AnalysisActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_analysis);

        // Upper Teeth Get IDs!

        // Neutral Teeth!
        CardView upmolar3left16neutralanalysis = (CardView) findViewById(R.id.upmolar3left16neutralanalysis);
        CardView upmolar2left15neutralanalysis = (CardView) findViewById(R.id.upmolar2left15neutralanalysis);
        CardView upmolar1left14neutralanalysis = (CardView) findViewById(R.id.upmolar1left14neutralanalysis);
        CardView uppremolar2left13neutralanalysis = (CardView) findViewById(R.id.uppremolar2left13neutralanalysis);
        CardView uppremolar1left12neutralanalysis = (CardView) findViewById(R.id.uppremolar1left12neutralanalysis);
        CardView upcanineright11neutralanalysis = (CardView) findViewById(R.id.upcanineright11neutralanalysis);
        CardView upincisor2left10neutralanalysis = (CardView) findViewById(R.id.upincisor2left10neutralanalysis);
        CardView upincisor1left9neutralanalysis = (CardView) findViewById(R.id.upincisor1left9neutralanalysis);
        CardView upincisor1right8neutralanalysis = (CardView) findViewById(R.id.upincisor1right8neutralanalysis);
        CardView upincisor2right7neutralanalysis = (CardView) findViewById(R.id.upincisor2right7neutralanalysis);
        CardView upcanineright6neutralanalysis = (CardView) findViewById(R.id.upcanineright6neutralanalysis);
        CardView uppremolar1right5neutralanalysis = (CardView) findViewById(R.id.uppremolar1right5neutralanalysis);
        CardView uppremolar2right4neutralanalysis = (CardView) findViewById(R.id.uppremolar2right4neutralanalysis);
        CardView upmolar1right3neutralanalysis = (CardView) findViewById(R.id.upmolar1right3neutralanalysis);
        CardView upmolar2right2neutralanalysis = (CardView) findViewById(R.id.upmolar2right2neutralanalysis);
        CardView upmolar3right1neutralanalysis = (CardView) findViewById(R.id.upmolar3right1neutralanalysis);
        CardView lowermolar3right1neutralanalysis = (CardView) findViewById(R.id.lowermolar3right1neutralanalysis);
        CardView lowermolar2right2neutralanalysis = (CardView) findViewById(R.id.lowermolar2right2neutralanalysis);
        CardView lowermolar1right3neutralanalysis = (CardView) findViewById(R.id.lowermolar1right3neutralanalysis);
        CardView lowerpremolar2right4neutralanalysis = (CardView) findViewById(R.id.lowerpremolar2right4neutralanalysis);
        CardView lowerpremolar1right5neutralanalysis = (CardView) findViewById(R.id.lowerpremolar1right5neutralanalysis);
        CardView lowercanineright6neutralanalysis = (CardView) findViewById(R.id.lowercanineright6neutralanalysis);
        CardView lowerincisor2right7neutralanalysis = (CardView) findViewById(R.id.lowerincisor2right7neutralanalysis);
        CardView lowerincisor1right8neutralanalysis = (CardView) findViewById(R.id.lowerincisor1right8neutralanalysis);
        CardView lowerincisor1left9neutralanalysis = (CardView) findViewById(R.id.lowerincisor1left9neutralanalysis);
        CardView lowerincisor2left10neutralanalysis = (CardView) findViewById(R.id.lowerincisor2left10neutralanalysis);
        CardView lowercanineleft11neutralanalysis = (CardView) findViewById(R.id.lowercanineleft11neutralanalysis);
        CardView lowerpremolar1left12neutralanalysis = (CardView) findViewById(R.id.lowerpremolar1left12neutralanalysis);
        CardView lowerpremolar2left13neutralanalysis = (CardView) findViewById(R.id.lowerpremolar2left13neutralanalysis);
        CardView lowermolar1left14neutralanalysis = (CardView) findViewById(R.id.lowermolar1left14neutralanalysis);
        CardView lowermolar2left15neutralanalysis = (CardView) findViewById(R.id.lowermolar2left15neutralanalysis);
        CardView lowermolar3left16neutralanalysis = (CardView) findViewById(R.id.lowermolar3left16neutralanalysis);


//        // Healthy Teeth!
        CardView upmolar3left16healthyanalysis = (CardView) findViewById(R.id.upmolar3left16healthyanalysis);
        CardView upmolar2left15healthyanalysis = (CardView) findViewById(R.id.upmolar2left15healthyanalysis);
        CardView upmolar1left14healthyanalysis = (CardView) findViewById(R.id.upmolar1left14healthyanalysis);
        CardView uppremolar2left13healthyanalysis = (CardView) findViewById(R.id.uppremolar2left13healthyanalysis);
        CardView uppremolar1left12healthyanalysis = (CardView) findViewById(R.id.uppremolar1left12healthyanalysis);
        CardView upcanineleft11healthyanalysis = (CardView) findViewById(R.id.upcanineleft11healthyanalysis);
        CardView upincisor2left10healthyanalysis = (CardView) findViewById(R.id.upincisor2left10healthyanalysis);
        CardView upincisor1left9healthyanalysis = (CardView) findViewById(R.id.upincisor1left9healthyanalysis);
        CardView upincisor1right8healthyanalysis = (CardView) findViewById(R.id.upincisor1right8healthyanalysis);
        CardView upincisor2right7healthyanalysis = (CardView) findViewById(R.id.upincisor2right7healthyanalysis);
        CardView upcanineright6healthyanalysis = (CardView) findViewById(R.id.upcanineright6healthyanalysis);
        CardView uppremolar1right5healthyanalysis = (CardView) findViewById(R.id.uppremolar1right5healthyanalysis);
        CardView uppremolar2right4healthyanalysis = (CardView) findViewById(R.id.uppremolar2right4healthyanalysis);
        CardView upmolar1right3healthyanalysis = (CardView) findViewById(R.id.upmolar1right3healthyanalysis);
        CardView upmolar2right2healthyanalysis = (CardView) findViewById(R.id.upmolar2right2healthyanalysis);
        CardView upmolar3right1healthyanalysis = (CardView) findViewById(R.id.upmolar3right1healthyanalysis);
        CardView lowermolar3right1healthyanalysis = (CardView) findViewById(R.id.lowermolar3right1healthyanalysis);
        CardView lowermolar2right2healthyanalysis = (CardView) findViewById(R.id.lowermolar2right2healthyanalysis);
        CardView lowermolar1right3healthyanalysis = (CardView) findViewById(R.id.lowermolar1right3healthyanalysis);
        CardView lowerpremolar2right4healthyanalysis = (CardView) findViewById(R.id.lowerpremolar2right4healthyanalysis);
        CardView lowerpremolar1right5healthyanalysis = (CardView) findViewById(R.id.lowerpremolar1right5healthyanalysis);
        CardView lowercanineright6healthyanalysis = (CardView) findViewById(R.id.lowercanineright6healthyanalysis);
        CardView lowerincisor2right7healthyanalysis = (CardView) findViewById(R.id.lowerincisor2right7healthyanalysis);
        CardView lowerincisor1right8healthyanalysis = (CardView) findViewById(R.id.lowerincisor1right8healthyanalysis);
        CardView lowerincisor1left9healthyanalysis = (CardView) findViewById(R.id.lowerincisor1left9healthyanalysis);
        CardView lowerincisor2left10healthyanalysis = (CardView) findViewById(R.id.lowerincisor2left10healthyanalysis);
        CardView lowercanineleft11healthyanalysis = (CardView) findViewById(R.id.lowercanineleft11healthyanalysis);
        CardView lowerpremolar1left12healthyanalysis = (CardView) findViewById(R.id.lowerpremolar1left12healthyanalysis);
        CardView lowerpremolar2left13healthyanalysis = (CardView) findViewById(R.id.lowerpremolar2left13healthyanalysis);
        CardView lowermolar1left14healthyanalysis = (CardView) findViewById(R.id.lowermolar1left14healthyanalysis);
        CardView lowermolar2left15healthyanalysis = (CardView) findViewById(R.id.lowermolar2left15healthyanalysis);
        CardView lowermolar3left16healthyanalysis = (CardView) findViewById(R.id.lowermolar3left16healthyanalysis);


        // Chipped Teeth.
        CardView upmolar3left16chippedanalysis = (CardView) findViewById(R.id.upmolar3left16chippedanalysis);
        CardView upmolar2left15chippedanalysis = (CardView) findViewById(R.id.upmolar2left15chippedanalysis);
        CardView upmolar1left14chippedanalysis = (CardView) findViewById(R.id.upmolar1left14chippedanalysis);
        CardView uppremolar2left13chippedanalysis = (CardView) findViewById(R.id.uppremolar2left13chippedanalysis);
        CardView uppremolar1left12chippedanalysis = (CardView) findViewById(R.id.uppremolar1left12chippedanalysis);
        CardView upcanineleft11chippedanalysis = (CardView) findViewById(R.id.upcanineleft11chippedanalysis);
        CardView upincisor2left10chippedanalysis = (CardView) findViewById(R.id.upincisor2left10chippedanalysis);
        CardView upincisor1left9chippedanalysis = (CardView) findViewById(R.id.upincisor1left9chippedanalysis);
        CardView upincisor1right8chippedanalysis = (CardView) findViewById(R.id.upincisor1right8chippedanalysis);
        CardView upincisor2right7chippedanalysis = (CardView) findViewById(R.id.upincisor2right7chippedanalysis);
        CardView upcanineright6chippedanalysis = (CardView) findViewById(R.id.upcanineright6chippedanalysis);
        CardView uppremolar1right5chippedanalysis = (CardView) findViewById(R.id.uppremolar1right5chippedanalysis);
        CardView uppremolar2right4chippedanalysis = (CardView) findViewById(R.id.uppremolar2right4chippedanalysis);
        CardView upmolar1right3chippedanalysis = (CardView) findViewById(R.id.upmolar1right3chippedanalysis);
        CardView upmolar2right2chippedanalysis = (CardView) findViewById(R.id.upmolar2right2chippedanalysis);
        CardView upmolar3right1chippedanalysis = (CardView) findViewById(R.id.upmolar3right1chippedanalysis);
        CardView lowermolar3right1chippedanalysis = (CardView) findViewById(R.id.lowermolar3right1chippedanalysis);
        CardView lowermolar2right2chippedanalysis = (CardView) findViewById(R.id.lowermolar2right2chippedanalysis);
        CardView lowermolar1right3chippedanalysis = (CardView) findViewById(R.id.lowermolar2right2chippedanalysis);
        CardView lowerpremolar2right4chippedanalysis = (CardView) findViewById(R.id.lowerpremolar2right4chippedanalysis);
        CardView lowerpremolar1right5chippedanalysis = (CardView) findViewById(R.id.lowerpremolar1right5chippedanalysis);
        CardView lowercanineright6chippedanalysis = (CardView) findViewById(R.id.lowercanineright6chippedanalysis);
        CardView lowerincisor2right7chippedanalysis = (CardView) findViewById(R.id.lowerincisor2right7chippedanalysis);
        CardView lowerincisor1right8chippedanalysis = (CardView) findViewById(R.id.lowerincisor1right8chippedanalysis);
        CardView lowerincisor1left9chippedanalysis = (CardView) findViewById(R.id.lowerincisor1left9chippedanalysis);
        CardView lowerincisor2left10chippedanalysis = (CardView) findViewById(R.id.lowerincisor2left10chippedanalysis);
        CardView lowercanineleft11chippedanalysis = (CardView) findViewById(R.id.lowercanineleft11chippedanalysis);
        CardView lowerpremolar1left12chippedanalysis = (CardView) findViewById(R.id.lowerpremolar1left12chippedanalysis);
        CardView lowerpremolar2left13chippedanalysis = (CardView) findViewById(R.id.lowerpremolar2left13chippedanalysis);
        CardView lowermolar1left14chippedanalysis = (CardView) findViewById(R.id.lowermolar1left14chippedanalysis);
        CardView lowermolar2left15chippedanalysis = (CardView) findViewById(R.id.lowermolar2left15chippedanalysis);
        CardView lowermolar3left16chippedanalysis = (CardView) findViewById(R.id.lowermolar3left16chippedanalysis);

        // Decay Teeth.
        CardView upmolar3left16decayanalysis = (CardView) findViewById(R.id.upmolar3left16decayanalysis);
        CardView upmolar2left15decayanalysis = (CardView) findViewById(R.id.upmolar2left15decayanalysis);
        CardView upmolar1left14decayanalysis = (CardView) findViewById(R.id.upmolar1left14decayanalysis);
        CardView uppremolar2left13decayanalysis = (CardView) findViewById(R.id.uppremolar2left13decayanalysis);
        CardView uppremolar1left12decayanalysis = (CardView) findViewById(R.id.uppremolar1left12decayanalysis);
        CardView upcanineleft11decayanalysis = (CardView) findViewById(R.id.upcanineleft11decayanalysis);
        CardView upincisor2left10decayanalysis = (CardView) findViewById(R.id.upincisor2left10decayanalysis);
        CardView upincisor1left9decayanalysis = (CardView) findViewById(R.id.upincisor1left9decayanalysis);
        CardView upincisor1right8decayanalysis = (CardView) findViewById(R.id.upincisor1right8decayanalysis);
        CardView upincisor2right7decayanalysis = (CardView) findViewById(R.id.upincisor2right7decayanalysis);
        CardView upcanineright6decayanalysis = (CardView) findViewById(R.id.upcanineright6decayanalysis);
        CardView uppremolar1right5decayanalysis = (CardView) findViewById(R.id.uppremolar1right5decayanalysis);
        CardView uppremolar2right4decayanalysis = (CardView) findViewById(R.id.uppremolar2right4decayanalysis);
        CardView upmolar1right3decayanalysis = (CardView) findViewById(R.id.upmolar1right3decayanalysis);
        CardView upmolar2right2decayanalysis = (CardView) findViewById(R.id.upmolar2right2decayanalysis);
        CardView upmolar3right1decayanalysis = (CardView) findViewById(R.id.upmolar3right1decayanalysis);
        CardView lowermolar3right1decayanalysis = (CardView) findViewById(R.id.lowermolar3right1decayanalysis);
        CardView lowermolar2right2decayanalysis = (CardView) findViewById(R.id.lowermolar2right2decayanalysis);
        CardView lowermolar1right3decayanalysis = (CardView) findViewById(R.id.lowermolar2right2decayanalysis);
        CardView lowerpremolar2right4decayanalysis = (CardView) findViewById(R.id.lowerpremolar2right4decayanalysis);
        CardView lowerpremolar1right5decayanalysis = (CardView) findViewById(R.id.lowerpremolar1right5decayanalysis);
        CardView lowercanineright6decayanalysis = (CardView) findViewById(R.id.lowercanineright6decayanalysis);
        CardView lowerincisor2right7decayanalysis = (CardView) findViewById(R.id.lowerincisor2right7decayanalysis);
        CardView lowerincisor1right8decayanalysis = (CardView) findViewById(R.id.lowerincisor1right8decayanalysis);
        CardView lowerincisor1left9decayanalysis = (CardView) findViewById(R.id.lowerincisor1left9decayanalysis);
        CardView lowerincisor2left10decayanalysis = (CardView) findViewById(R.id.lowerincisor2left10decayanalysis);
        CardView lowercanineleft11decayanalysis = (CardView) findViewById(R.id.lowercanineleft11decayanalysis);
        CardView lowerpremolar1left12decayanalysis = (CardView) findViewById(R.id.lowerpremolar1left12decayanalysis);
        CardView lowerpremolar2left13decayanalysis = (CardView) findViewById(R.id.lowerpremolar2left13decayanalysis);
        CardView lowermolar1left14decayanalysis = (CardView) findViewById(R.id.lowermolar1left14decayanalysis);
        CardView lowermolar2left15decayanalysis = (CardView) findViewById(R.id.lowermolar2left15decayanalysis);
        CardView lowermolar3left16decayanalysis = (CardView) findViewById(R.id.lowermolar3left16decayanalysis);

        // Lost Teeth.
        CardView upmolar3left16lossanalysis = (CardView) findViewById(R.id.upmolar3left16lossanalysis);
        CardView upmolar2left15lossanalysis = (CardView) findViewById(R.id.upmolar2left15lossanalysis);
        CardView upmolar1left14lossanalysis = (CardView) findViewById(R.id.upmolar1left14lossanalysis);
        CardView uppremolar2left13lossanalysis = (CardView) findViewById(R.id.uppremolar2left13lossanalysis);
        CardView uppremolar1left12lossanalysis = (CardView) findViewById(R.id.uppremolar1left12lossanalysis);
        CardView upcanineleft11lossanalysis = (CardView) findViewById(R.id.upcanineleft11lossanalysis);
        CardView upincisor2left10lossanalysis = (CardView) findViewById(R.id.upincisor2left10lossanalysis);
        CardView upincisor1left9lossanalysis = (CardView) findViewById(R.id.upincisor1left9lossanalysis);
        CardView upincisor1right8lossanalysis = (CardView) findViewById(R.id.upincisor1right8lossanalysis);
        CardView upincisor2right7lossanalysis = (CardView) findViewById(R.id.upincisor2right7lossanalysis);
        CardView upcanineright6lossanalysis = (CardView) findViewById(R.id.upcanineright6lossanalysis);
        CardView uppremolar1right5lossanalysis = (CardView) findViewById(R.id.uppremolar1right5lossanalysis);
        CardView uppremolar2right4lossanalysis = (CardView) findViewById(R.id.uppremolar2right4lossanalysis);
        CardView upmolar1right3lossanalysis = (CardView) findViewById(R.id.upmolar1right3lossanalysis);
        CardView upmolar2right2lossanalysis = (CardView) findViewById(R.id.upmolar2right2lossanalysis);
        CardView upmolar3right1lossanalysis = (CardView) findViewById(R.id.upmolar3right1lossanalysis);
        CardView lowermolar3right1lossanalysis = (CardView) findViewById(R.id.lowermolar3right1lossanalysis);
        CardView lowermolar2right2lossanalysis = (CardView) findViewById(R.id.lowermolar2right2lossanalysis);
        CardView lowermolar1right3lossanalysis = (CardView) findViewById(R.id.lowermolar1right3lossanalysis);
        CardView lowerpremolar2right4lossanalysis = (CardView) findViewById(R.id.lowerpremolar2right4lossanalysis);
        CardView lowerpremolar1right5lossanalysis = (CardView) findViewById(R.id.lowerpremolar1right5lossanalysis);
        CardView lowercanineright6lossanalysis = (CardView) findViewById(R.id.lowercanineright6lossanalysis);
        CardView lowerincisor2right7lossanalysis = (CardView) findViewById(R.id.lowerincisor2right7lossanalysis);
        CardView lowerincisor1right8lossanalysis = (CardView) findViewById(R.id.lowerincisor1right8lossanalysis);
        CardView lowerincisor1left9lossanalysis = (CardView) findViewById(R.id.lowerincisor1left9lossanalysis);
        CardView lowerincisor2left10lossanalysis = (CardView) findViewById(R.id.lowerincisor2left10lossanalysis);
        CardView lowercanineleft11lossanalysis = (CardView) findViewById(R.id.lowercanineleft11lossanalysis);
        CardView lowerpremolar1left12lossanalysis = (CardView) findViewById(R.id.lowerpremolar1left12lossanalysis);
        CardView lowerpremolar2left13lossanalysis = (CardView) findViewById(R.id.lowerpremolar2left13lossanalysis);
        CardView lowermolar1left14lossanalysis = (CardView) findViewById(R.id.lowermolar1left14lossanalysis);
        CardView lowermolar2left15lossanalysis = (CardView) findViewById(R.id.lowermolar2left15lossanalysis);
        CardView lowermolar3left16lossanalysis = (CardView) findViewById(R.id.lowermolar3left16lossanalysis);


        // Click Listeners!

        upmolar3left16neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upmolar2left15neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upmolar1left14neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        uppremolar2left13neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        uppremolar1left12neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upcanineright11neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upincisor2left10neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upincisor1left9neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upincisor1right8neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upincisor2right7neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upcanineright6neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        uppremolar1right5neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        uppremolar2right4neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upmolar1right3neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upmolar2right2neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        upmolar3right1neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });

        // Lower Neutral
        lowermolar3right1neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowermolar2right2neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowermolar1right3neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerpremolar2right4neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerpremolar1right5neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowercanineright6neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerincisor2right7neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerincisor1right8neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerincisor1left9neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerincisor2left10neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowercanineleft11neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerpremolar1left12neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowerpremolar2left13neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowermolar1left14neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowermolar2left15neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });
        lowermolar3left16neutralanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=unknown+tooth+condition%2C+please+consult+to+a+dentist")));
            }
        });

        // Healthy Teeth
        // Click Listeners!

        upmolar3left16healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upmolar2left15healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upmolar1left14healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        uppremolar2left13healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        uppremolar1left12healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upcanineleft11healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upincisor2left10healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upincisor1left9healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upincisor1right8healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upincisor2right7healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upcanineright6healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        uppremolar1right5healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        uppremolar2right4healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upmolar1right3healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upmolar2right2healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        upmolar3right1healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });

        // Lower Healthy
        lowermolar3right1healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowermolar2right2healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowermolar1right3healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerpremolar2right4healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerpremolar1right5healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowercanineright6healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerincisor2right7healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerincisor1right8healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerincisor1left9healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerincisor2left10healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowercanineleft11healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerpremolar1left12healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowerpremolar2left13healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowermolar1left14healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowermolar2left15healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });
        lowermolar3left16healthyanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=signs+of+healthy+teeth")));
            }
        });

        // Chipped Teeth.
        // Click Listeners!

        upmolar3left16chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upmolar2left15chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upmolar1left14chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        uppremolar2left13chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        uppremolar1left12chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upcanineleft11chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upincisor2left10chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upincisor1left9chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upincisor1right8chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upincisor2right7chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upcanineright6chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        uppremolar1right5chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        uppremolar2right4chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upmolar1right3chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upmolar2right2chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        upmolar3right1chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });

        // Lower Healthy
        lowermolar3right1chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowermolar2right2chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowermolar1right3chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerpremolar2right4chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerpremolar1right5chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowercanineright6chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerincisor2right7chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerincisor1right8chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerincisor1left9chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerincisor2left10chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowercanineleft11chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerpremolar1left12chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowerpremolar2left13chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowermolar1left14chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowermolar2left15chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });
        lowermolar3left16chippedanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+chipped+tooth")));
            }
        });

        // Lost Teeth.
        // Click Listeners!

        upmolar3left16lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upmolar2left15lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upmolar1left14lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        uppremolar2left13lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        uppremolar1left12lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upcanineleft11lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upincisor2left10lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upincisor1left9lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upincisor1right8lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upincisor2right7lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upcanineright6lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        uppremolar1right5lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        uppremolar2right4lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upmolar1right3lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upmolar2right2lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        upmolar3right1lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });

        // Lower Healthy
        lowermolar3right1lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowermolar2right2lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowermolar1right3lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerpremolar2right4lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerpremolar1right5lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowercanineright6lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerincisor2right7lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerincisor1right8lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerincisor1left9lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerincisor2left10lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowercanineleft11lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerpremolar1left12lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowerpremolar2left13lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowermolar1left14lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowermolar2left15lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });
        lowermolar3left16lossanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+a+lost+tooth")));
            }
        });

        // Decay Teeth
        // Click Listeners!

        upmolar3left16decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upmolar2left15decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upmolar1left14decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        uppremolar2left13decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        uppremolar1left12decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upcanineleft11decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upincisor2left10decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upincisor1left9decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upincisor1right8decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upincisor2right7decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upcanineright6decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        uppremolar1right5decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        uppremolar2right4decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upmolar1right3decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upmolar2right2decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        upmolar3right1decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });

        // Lower Healthy
        lowermolar3right1decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowermolar2right2decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowermolar1right3decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerpremolar2right4decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerpremolar1right5decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowercanineright6decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerincisor2right7decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerincisor1right8decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerincisor1left9decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerincisor2left10decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowercanineleft11decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerpremolar1left12decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowerpremolar2left13decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowermolar1left14decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowermolar2left15decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });
        lowermolar3left16decayanalysis.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=what+is+decay+tooth")));
            }
        });



        //TextView sample = (TextView) findViewById(R.id.sample_text);
         if (getIntent() != null && getIntent().getExtras() != null && getIntent().hasExtra(StoragePredictionActivity.LABEL_LIST)) {


            for (int i = 0; i < 30; i++) {
                ArrayList<String> classList = (ArrayList<String>) getIntent().getSerializableExtra(StoragePredictionActivity.LABEL_LIST);

//                    sample.setText(classList.toString());
//                    System.out.println(classList);

                //Bookmark

//                System.out.println(classList.toString().contains("u8"));


                if(classList.toString().contains("u16")){

                    if(classList.contains("u16healthy")){
                        upmolar3left16healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16decay")){
                        upmolar3left16decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16chipped")){
                        upmolar3left16chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16loss")){
                        upmolar3left16lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar3left16neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upmolar3left16neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("u15")){

                    if(classList.contains("u15healthy")){
                        upmolar2left15healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15decay")){
                        upmolar2left15decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15chipped")){
                        upmolar2left15chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15loss")){
                        upmolar2left15lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar2left15neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upmolar2left15neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u14")){
                    if(classList.contains("u14healthy")){
                        upmolar1left14healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14decay")){
                        upmolar1left14decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14chipped")){
                        upmolar1left14chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14loss")){
                        upmolar1left14chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar1left14neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upmolar1left14neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u13")){

                    if(classList.contains("u13healthy")){
                        uppremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13decay")){
                        uppremolar2left13decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13chipped")){
                        uppremolar2left13chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13loss")){
                        uppremolar2left13lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        uppremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }

                else{
                    uppremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u12")){

                    if(classList.contains("u12healthy")){
                        uppremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12decay")){
                        uppremolar1left12decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12chipped")){
                        uppremolar1left12chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12loss")){
                        uppremolar1left12lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        uppremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }

                else{
                    uppremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u11")){

                    if(classList.contains("u11healthy")){
                        upcanineleft11healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11decay")){
                        upcanineleft11decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11chipped")){
                        upcanineleft11chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11loss")){
                        upcanineleft11lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upcanineright11neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    upcanineright11neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("u10")){

                    if(classList.contains("u10healthy")){
                        upincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10decay")){
                        upincisor2left10decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10chipped")){
                        upincisor2left10chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10loss")){
                        upincisor2left10lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("u9")){

                    if(classList.contains("u9healthy")){
                        upincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9decay")){
                        upincisor1left9decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9chipped")){
                        upincisor1left9chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9loss")){
                        upincisor1left9lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u8")){
                    if(classList.contains("u8healthy")){
                        upincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8decay")){
                        upincisor1right8decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8chipped")){
                        upincisor1right8chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8loss")){
                        upincisor1right8lossanalysis.setVisibility(View.VISIBLE);

                    }
                    else{
                        upincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
                }


                if(classList.toString().contains("u7")){

                    if(classList.contains("u7healthy")){
                        upincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7decay")){
                        upincisor2right7decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7chipped")){
                        upincisor2right7chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7loss")){
                        upincisor2right7lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }

                else{
                    upincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u6")){

                    if(classList.contains("u6healthy")){
                        upcanineright6healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6decay")){
                        upcanineright6decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6chipped")){
                        upcanineright6chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6loss")){
                        upcanineright6lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upcanineright6neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }

                else{
                    upcanineright6neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u5")){

                    if(classList.contains("u5healthy")){
                        uppremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5decay")){
                        uppremolar1right5decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5chipped")){
                        uppremolar1right5chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5loss")){
                        uppremolar1right5lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        uppremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    uppremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u4")){

                    if(classList.contains("u4healthy")){
                        uppremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4decay")){
                        uppremolar2right4decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4chipped")){
                        uppremolar2right4chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4loss")){
                        uppremolar2right4lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        uppremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    uppremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("u3")){

                    if(classList.contains("u3healthy")){
                        upmolar1right3healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3decay")){
                        upmolar1right3decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3chipped")){
                        upmolar1right3chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3loss")){
                        upmolar1right3lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar1right3neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upmolar1right3neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u2")){
                    if(classList.contains("u2healthy")){
                        upmolar2right2healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2decay")){
                        upmolar2right2decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2chipped")){
                        upmolar2right2chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2loss")){
                        upmolar2right2lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar2right2neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    upmolar2right2neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("u1")){

                    if(classList.contains("u1healthy")){
                        upmolar3right1healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1decay")){
                        upmolar3right1decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1chipped")){
                        upmolar3right1chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1loss")){
                        upmolar3right1lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        upmolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    upmolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i16")){

                    if(classList.contains("i16healthy")){
                        lowermolar3left16healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16decay")){
                        lowermolar3left16decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16chipped")){
                        lowermolar3left16chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16loss")){
                        lowermolar3left16lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar3left16neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }

                else{
                    lowermolar3left16neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i15")){

                    if(classList.contains("i15healthy")){
                        lowermolar2left15healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15decay")){
                        lowermolar2left15decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15chipped")){
                        lowermolar2left15chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15loss")){
                        lowermolar2left15lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar2left15neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    lowermolar2left15neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("i14")){

                    if(classList.contains("i14healthy")){
                        lowermolar1left14healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14decay")){
                        lowermolar1left14decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14chipped")){
                        lowermolar1left14chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14loss")){
                        lowermolar1left14lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar1left14neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowermolar1left14neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("i13")){

                    if(classList.contains("i13healthy")){
                        lowerpremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13decay")){
                        lowerpremolar2left13decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13chipped")){
                        lowerpremolar2left13chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13loss")){
                        lowerpremolar2left13lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerpremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowerpremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i12")){
                    if(classList.contains("i12healthy")){
                        lowerpremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12decay")){
                        lowerpremolar1left12decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12chipped")){
                        lowerpremolar1left12chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12loss")){
                        lowerpremolar1left12lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerpremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowerpremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i11")){

                    if(classList.contains("i11healthy")){
                        lowercanineleft11healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11decay")){
                        lowercanineleft11decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11chipped")){
                        lowercanineleft11chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11loss")){
                        lowercanineleft11lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowercanineleft11neutralanalysis.setVisibility(View.VISIBLE);
                    }


                }

                else{
                    lowercanineleft11neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i10")){

                    if(classList.contains("i10healthy")){
                        lowerincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10decay")){
                        lowerincisor2left10decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10chipped")){
                        lowerincisor2left10chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10loss")){
                        lowerincisor2left10lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }

                else{
                    lowerincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i9")){

                    if(classList.contains("i9healthy")){
                        lowerincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9decay")){
                        lowerincisor1left9decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9chipped")){
                        lowerincisor1left9chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9loss")){
                        lowerincisor1left9lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    lowerincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i8")){

                    if(classList.contains("i8healthy")){
                        lowerincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8decay")){
                        lowerincisor1right8decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8chipped")){
                        lowerincisor1right8chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8loss")){
                        lowerincisor1right8lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }

                else{
                    lowerincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i7")){

                    if(classList.contains("i7healthy")){
                        lowerincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7decay")){
                        lowerincisor2right7decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7chipped")){
                        lowerincisor2right7chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7loss")){
                        lowerincisor2right7lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    lowerincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("i6")){

                    if(classList.contains("i6healthy")){
                        lowercanineright6healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6decay")){
                        lowercanineright6decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6chipped")){
                        lowercanineright6chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6loss")){
                        lowercanineright6lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowercanineright6neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowercanineright6neutralanalysis.setVisibility(View.VISIBLE);
                }
                if(classList.toString().contains("i5")){

                    if(classList.contains("i5healthy")){
                        lowerpremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5decay")){
                        lowerpremolar1right5decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5chipped")){
                        lowerpremolar1right5chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5loss")){
                        lowerpremolar1right5lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerpremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowerpremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i4")){
                    if(classList.contains("i4healthy")){
                        lowerpremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4decay")){
                        lowerpremolar2right4decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4chipped")){
                        lowerpremolar2right4chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4loss")){
                        lowerpremolar2right4lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowerpremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }
                else{
                    lowerpremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i3")){

                    if(classList.contains("i3healthy")){
                        lowermolar1right3healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3decay")){
                        lowermolar1right3decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3chipped")){
                        lowermolar1right3chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3loss")){
                        lowermolar1right3lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar1right3neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }

                else{
                    lowermolar1right3neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i2")){

                    if(classList.contains("i2healthy")){
                        lowermolar2right2healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2decay")){
                        lowermolar2right2decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2chipped")){
                        lowermolar2right2chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2loss")){
                        lowermolar2right2lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar2right2neutralanalysis.setVisibility(View.VISIBLE);
                    }
                }

                else{
                    lowermolar2right2neutralanalysis.setVisibility(View.VISIBLE);
                }

                if(classList.toString().contains("i1")){

                    if(classList.contains("i1healthy")){
                        lowermolar3right1healthyanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1decay")){
                        lowermolar3right1decayanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1chipped")){
                        lowermolar3right1chippedanalysis.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1loss")){
                        lowermolar3right1lossanalysis.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                }




//                if(classList.contains("u16healthy")){
//                    upmolar3left16healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u15healthy")){
//                    upmolar2left15healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u14healthy")){
//                    upmolar1left14healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u13healthy")){
//                    uppremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u12healthy")){
//                    uppremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u11healthy")){
//                    upcanineleft11healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u10healthy")){
//                    upincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u9healthy")){
//                    upincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u8healthy")){
//                    upincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u7healthy")){
//                    upincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u6healthy")){
//                    upcanineright6healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u5healthy")){
//                    uppremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u4healthy")){
//                    uppremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u3healthy")){
//                    upmolar1right3healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u2healthy")){
//                    upmolar1right3healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u1healthy")){
//                    upmolar3right1healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i16healthy")){
//                    lowermolar3left16healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i15healthy")){
//                    lowermolar2left15healthyanalysis.setVisibility(View.VISIBLE);
//                }
//                if(classList.contains("i14healthy")){
//                    lowermolar1left14healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i13healthy")){
//                    lowerpremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i12healthy")){
//                    lowerpremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i11healthy")){
//                    lowercanineleft11healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i10healthy")){
//                    lowerincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i9healthy")){
//                    lowerincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i8healthy")){
//                    lowerincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i7healthy")){
//                    lowerincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i6healthy")){
//                    lowercanineright6healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i5healthy")){
//                    lowerpremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i4healthy")){
//                    lowerpremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i3healthy")){
//                    lowermolar1right3healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i2healthy")){
//                    lowermolar2right2healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i1healthy")){
//                    lowermolar3right1healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                /////////////////////////////////////////// Chipped
//
//                if(classList.contains("u16chipped")){
//                    upmolar3left16chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u15chipped")){
//                    upmolar2left15chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u14chipped")){
//                    upmolar1left14chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u13chipped")){
//                    uppremolar2left13chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u12chipped")){
//                    uppremolar1left12chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u11chipped")){
//                    upcanineleft11chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u10chipped")){
//                    upincisor2left10chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u9chipped")){
//                    upincisor1left9chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u8chipped")){
//                    upincisor1right8chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u7chipped")){
//                    upincisor2right7chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u6chipped")){
//                    upcanineright6chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u5chipped")){
//                    uppremolar1right5chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u4chipped")){
//                    uppremolar2right4chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u3chipped")){
//                    upmolar1right3chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u2chipped")){
//                    upmolar1right3chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u1chipped")){
//                    upmolar3right1chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i16chipped")){
//                    lowermolar3left16chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i15chipped")){
//                    lowermolar2left15chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i14chipped")){
//                    lowermolar1left14chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i13chipped")){
//                    lowerpremolar2left13chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i12chipped")){
//                    lowerpremolar1left12chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i11chipped")){
//                    lowercanineleft11chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i10chipped")){
//                    lowerincisor2left10chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i9chipped")){
//                    lowerincisor1left9chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i8chipped")){
//                    lowerincisor1right8chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i7chipped")){
//                    lowerincisor2right7chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i6chipped")){
//                    lowercanineright6chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i5chipped")){
//                    lowerpremolar1right5chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i4chipped")){
//                    lowerpremolar2right4chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i3chipped")){
//                    lowermolar1right3chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i2chipped")){
//                    lowermolar2right2chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i1chipped")){
//                    lowermolar3right1chippedanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                /////////////////////////////////////////// Decay
//
//                if(classList.contains("u16decay")){
//                    upmolar3left16decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u15decay")){
//                    upmolar2left15decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u14decay")){
//                    upmolar1left14decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u13decay")){
//                    uppremolar2left13decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u12decay")){
//                    uppremolar1left12decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u11decay")){
//                    upcanineleft11decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u10decay")){
//                    upincisor2left10decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u9decay")){
//                    upincisor1left9decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u8decay")){
//                    upincisor1right8decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u7decay")){
//                    upincisor2right7decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u6decay")){
//                    upcanineright6decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u5decay")){
//                    uppremolar1right5decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u4decay")){
//                    uppremolar2right4decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u3decay")){
//                    upmolar1right3decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u2decay")){
//                    upmolar1right3decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u1decay")){
//                    upmolar3right1decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i16decay")){
//                    lowermolar3left16decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i15decay")){
//                    lowermolar2left15decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i14decay")){
//                    lowermolar1left14decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i13decay")){
//                    lowerpremolar2left13decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i12decay")){
//                    lowerpremolar1left12decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i11decay")){
//                    lowercanineleft11decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i10decay")){
//                    lowerincisor2left10decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i9decay")){
//                    lowerincisor1left9decayanalysis.setVisibility(View.VISIBLE);
//                }
//                if(classList.contains("i8decay")){
//                    lowerincisor1right8decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i7decay")){
//                    lowerincisor2right7decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i6decay")){
//                    lowercanineright6decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i5decay")){
//                    lowerpremolar1right5decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i4decay")){
//                    lowerpremolar2right4decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i3decay")){
//                    lowermolar1right3decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i2decay")){
//                    lowermolar2right2decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i1decay")){
//                    lowermolar3right1decayanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//
//                /////////////////////////////////////////// Loss
//
//                if(classList.contains("u16loss")){
//                    upmolar3left16lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u15loss")){
//                    upmolar2left15lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u14loss")){
//                    upmolar1left14lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u13loss")){
//                    uppremolar2left13lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u12loss")){
//                    uppremolar1left12lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u11loss")){
//                    upcanineleft11lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u10loss")){
//                    upincisor2left10lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u9loss")){
//                    upincisor1left9lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u8loss")){
//                    upincisor1right8lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("u7loss")){
//                    upincisor2right7lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u6loss")){
//                    upcanineright6lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u5loss")){
//                    uppremolar1right5lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u4loss")){
//                    uppremolar2right4lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u3loss")){
//                    upmolar1right3lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u2loss")){
//                    upmolar1right3lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("u1loss")){
//                    upmolar3right1lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i16loss")){
//                    lowermolar3left16lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i15loss")){
//                    lowermolar2left15lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i14loss")){
//                    lowermolar1left14lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i13loss")){
//                    lowerpremolar2left13lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i12loss")){
//                    lowerpremolar1left12lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i11loss")){
//                    lowercanineleft11lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i10loss")){
//                    lowerincisor2left10lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i9loss")){
//                    lowerincisor1left9lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i8loss")){
//                    lowerincisor1right8lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i7loss")){
//                    lowerincisor2right7lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i6loss")){
//                    lowercanineright6lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i5loss")){
//                    lowerpremolar1right5lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i4loss")){
//                    lowerpremolar2right4lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//
//                if(classList.contains("i3loss")){
//                    lowermolar1right3lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i2loss")){
//                    lowermolar2right2lossanalysis.setVisibility(View.VISIBLE);
//                }
//
//                if(classList.contains("i1loss")){
//                    lowermolar3right1lossanalysis.setVisibility(View.VISIBLE);
//                }

//                else{
//                    upmolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                    upcanineright11neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                    upcanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                    lowercanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                    lowercanineleft11neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//                }



//                if (classList.contains("molar") && classList.contains("incisor")) {
//                    // sample2.setText("Hello");
////
//                    upmolar3left16healthyanalysis.setVisibility(View.VISIBLE);
//                    upmolar2left15healthyanalysis.setVisibility(View.VISIBLE);
//                    upmolar1left14healthyanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
//                    upcanineleft11healthyanalysis.setVisibility(View.VISIBLE);
//                    upincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
//                    upincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
//                    upincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
//                    upincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
//                    upcanineright6healthyanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
//                    upmolar1right3healthyanalysis.setVisibility(View.VISIBLE);
//                    upmolar2right2healthyanalysis.setVisibility(View.VISIBLE);
//                    upmolar3right1healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3right1healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2right2healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1right3healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2right4healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1right5healthyanalysis.setVisibility(View.VISIBLE);
//                    lowercanineright6healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2right7healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1right8healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1left9healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2left10healthyanalysis.setVisibility(View.VISIBLE);
//                    lowercanineleft11healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1left12healthyanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2left13healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1left14healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2left15healthyanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3left16healthyanalysis.setVisibility(View.VISIBLE);
//                }
//
//                // TextView sample2 = (TextView) findViewById(R.id.sample_text2);
//                else if (classList.contains("molar")) {
//                    // sample2.setText("Hello");
//
//                    upmolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                    upcanineright11neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                    upincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                    upcanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                    uppremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                    upmolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                    lowercanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                    lowercanineleft11neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                    lowerpremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                    lowermolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//
//                }


            }
        }

    }
}