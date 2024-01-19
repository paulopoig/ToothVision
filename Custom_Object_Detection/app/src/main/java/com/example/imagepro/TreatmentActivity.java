package com.example.imagepro;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;

import androidx.appcompat.app.AppCompatActivity;
import androidx.cardview.widget.CardView;

import java.util.ArrayList;

public class TreatmentActivity extends AppCompatActivity {


//    // Upper Teeth Declaration!
//

//
//    CardView upmolar3left16healthytreatment, upmolar2left15healthytreatment, upmolar1left14healthytreatment, uppremolar2left13healthytreatment,
//            uppremolar1left12healthytreatment, upcanineleft11healthytreatment, upincisor2left10healthytreatment, upincisor1left9healthytreatment,
//            upincisor1right8healthytreatment, upincisor2right7healthytreatment, upcanineright6healthytreatment, uppremolar1right5healthytreatment,
//            uppremolar2right4healthytreatment, upmolar1right3healthytreatment, upmolar2right2healthytreatment, upmolar3right1healthytreatment;
//
//    CardView upmolar3left16chippedtreatment, upmolar2left15chippedtreatment, upmolar1left14chippedtreatment, uppremolar2left13chippedtreatment,
//            uppremolar1left12chippedtreatment, upcanineleft11chippedtreatment, upincisor2left10chippedtreatment, upincisor1left9chippedtreatment,
//            upincisor1right8chippedtreatment, upincisor2right7chippedtreatment, upcanineright6chippedtreatment, uppremolar1right5chippedtreatment,
//            uppremolar2right4chippedtreatment, upmolar1right3chippedtreatment, upmolar2right2chippedtreatment, upmolar3right1chippedtreatment;
//
//    CardView upmolar3left16losstreatment, upmolar2left15losstreatment, upmolar1left14losstreatment, uppremolar2left13losstreatment,
//            uppremolar1left12losstreatment, upcanineleft11losstreatment, upincisor2left10losstreatment, upincisor1left9losstreatment,
//            upincisor1right8losstreatment, upincisor2right7losstreatment, upcanineright6losstreatment, uppremolar1right5losstreatment,
//            uppremolar2right4losstreatment, upmolar1right3losstreatment, upmolar2right2losstreatment, upmolar3right1losstreatment;
//
//    CardView upmolar3left16decaytreatment, upmolar2left15decaytreatment, upmolar1left14decaytreatment, uppremolar2left13decaytreatment,
//            uppremolar1left12decaytreatment, upcanineleft11decaytreatment, upincisor2left10decaytreatment, upincisor1left9decaytreatment,
//            upincisor1right8decaytreatment, upincisor2right7decaytreatment, upcanineright6decaytreatment, uppremolar1right5decaytreatment,
//            uppremolar2right4decaytreatment, upmolar1right3decaytreatment, upmolar2right2decaytreatment, upmolar3right1decaytreatment;
//
//    // Lower Teeth Declaration!
//

//
//    CardView lowermolar3right1healthytreatment, lowermolar2right2healthytreatment, lowermolar1right3healthytreatment, lowerpremolar2right4healthytreatment,
//            lowerpremolar1right5healthytreatment, lowercanineright6healthytreatment, lowerincisor2right7healthytreatment, lowerincisor1right8healthytreatment,
//            lowerincisor1left9healthytreatment, lowerincisor2left10healthytreatment, lowercanineleft11healthytreatment, lowerpremolar1left12healthytreatment,
//            lowerpremolar2left13healthytreatment, lowermolar1left14healthytreatment, lowermolar2left15healthytreatment, lowermolar3left16healthytreatment;
//
//    CardView lowermolar3right1chippedtreatment, lowermolar2right2chippedtreatment, lowermolar1right3chippedtreatment, lowerpremolar2right4chippedtreatment,
//    lowerpremolar1right5chippedtreatment, lowercanineright6chippedtreatment, lowerincisor2right7chippedtreatment, lowerincisor1right8chippedtreatment,
//    lowerincisor1left9chippedtreatment, lowerincisor2left10chippedtreatment, lowercanineleft11chippedtreatment, lowerpremolar1left12chippedtreatment,
//    lowerpremolar2left13chippedtreatment, lowermolar1left14chippedtreatment, lowermolar2left15chippedtreatment, lowermolar3left16chippedtreatment;
//
//    CardView lowermolar3right1losstreatment, lowermolar2right2losstreatment, lowermolar1right3losstreatment, lowerpremolar2right4losstreatment,
//    lowerpremolar1right5losstreatment, lowercanineright6losstreatment, lowerincisor2right7losstreatment, lowerincisor1right8losstreatment,
//    lowerincisor1left9losstreatment, lowerincisor2left10losstreatment, lowercanineleft11losstreatment, lowerpremolar1left12losstreatment,
//    lowerpremolar2left13losstreatment, lowermolar1left14losstreatment, lowermolar2left15losstreatment, lowermolar3left16losstreatment;
//
//    CardView lowermolar3right1decaytreatment, lowermolar2right2decaytreatment, lowermolar1right3decaytreatment, lowerpremolar2right4decaytreatment,
//    lowerpremolar1right5decaytreatment, lowercanineright6decaytreatment, lowerincisor2right7decaytreatment, lowerincisor1right8decaytreatment,
//    lowerincisor1left9decaytreatment, lowerincisor2left10decaytreatment, lowercanineleft11decaytreatment, lowerpremolar1left12decaytreatment,
//    lowerpremolar2left13decaytreatment, lowermolar1left14decaytreatment, lowermolar2left15decaytreatment, lowermolar3left16decaytreatment;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_treatment);


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
        CardView upmolar3left16healthytreatment = (CardView) findViewById(R.id.upmolar3left16healthytreatment);
        CardView upmolar2left15healthytreatment = (CardView) findViewById(R.id.upmolar2left15healthytreatment);
        CardView upmolar1left14healthytreatment = (CardView) findViewById(R.id.upmolar1left14healthytreatment);
        CardView uppremolar2left13healthytreatment = (CardView) findViewById(R.id.uppremolar2left13healthytreatment);
        CardView uppremolar1left12healthytreatment = (CardView) findViewById(R.id.uppremolar1left12healthytreatment);
        CardView upcanineleft11healthytreatment = (CardView) findViewById(R.id.upcanineleft11healthytreatment);
        CardView upincisor2left10healthytreatment = (CardView) findViewById(R.id.upincisor2left10healthytreatment);
        CardView upincisor1left9healthytreatment = (CardView) findViewById(R.id.upincisor1left9healthytreatment);
        CardView upincisor1right8healthytreatment = (CardView) findViewById(R.id.upincisor1right8healthytreatment);
        CardView upincisor2right7healthytreatment = (CardView) findViewById(R.id.upincisor2right7healthytreatment);
        CardView upcanineright6healthytreatment = (CardView) findViewById(R.id.upcanineright6healthytreatment);
        CardView uppremolar1right5healthytreatment = (CardView) findViewById(R.id.uppremolar1right5healthytreatment);
        CardView uppremolar2right4healthytreatment = (CardView) findViewById(R.id.uppremolar2right4healthytreatment);
        CardView upmolar1right3healthytreatment = (CardView) findViewById(R.id.upmolar1right3healthytreatment);
        CardView upmolar2right2healthytreatment = (CardView) findViewById(R.id.upmolar2right2healthytreatment);
        CardView upmolar3right1healthytreatment = (CardView) findViewById(R.id.upmolar3right1healthytreatment);
        CardView lowermolar3right1healthytreatment = (CardView) findViewById(R.id.lowermolar3right1healthytreatment);
        CardView lowermolar2right2healthytreatment = (CardView) findViewById(R.id.lowermolar2right2healthytreatment);
        CardView lowermolar1right3healthytreatment = (CardView) findViewById(R.id.lowermolar1right3healthytreatment);
        CardView lowerpremolar2right4healthytreatment = (CardView) findViewById(R.id.lowerpremolar2right4healthytreatment);
        CardView lowerpremolar1right5healthytreatment = (CardView) findViewById(R.id.lowerpremolar1right5healthytreatment);
        CardView lowercanineright6healthytreatment = (CardView) findViewById(R.id.lowercanineright6healthytreatment);
        CardView lowerincisor2right7healthytreatment = (CardView) findViewById(R.id.lowerincisor2right7healthytreatment);
        CardView lowerincisor1right8healthytreatment = (CardView) findViewById(R.id.lowerincisor1right8healthytreatment);
        CardView lowerincisor1left9healthytreatment = (CardView) findViewById(R.id.lowerincisor1left9healthytreatment);
        CardView lowerincisor2left10healthytreatment = (CardView) findViewById(R.id.lowerincisor2left10healthytreatment);
        CardView lowercanineleft11healthytreatment = (CardView) findViewById(R.id.lowercanineleft11healthytreatment);
        CardView lowerpremolar1left12healthytreatment = (CardView) findViewById(R.id.lowerpremolar1left12healthytreatment);
        CardView lowerpremolar2left13healthytreatment = (CardView) findViewById(R.id.lowerpremolar2left13healthytreatment);
        CardView lowermolar1left14healthytreatment = (CardView) findViewById(R.id.lowermolar1left14healthytreatment);
        CardView lowermolar2left15healthytreatment = (CardView) findViewById(R.id.lowermolar2left15healthytreatment);
        CardView lowermolar3left16healthytreatment = (CardView) findViewById(R.id.lowermolar3left16healthytreatment);


        // Chipped Teeth.
        CardView upmolar3left16chippedtreatment = (CardView) findViewById(R.id.upmolar3left16chippedtreatment);
        CardView upmolar2left15chippedtreatment = (CardView) findViewById(R.id.upmolar2left15chippedtreatment);
        CardView upmolar1left14chippedtreatment = (CardView) findViewById(R.id.upmolar1left14chippedtreatment);
        CardView uppremolar2left13chippedtreatment = (CardView) findViewById(R.id.uppremolar2left13chippedtreatment);
        CardView uppremolar1left12chippedtreatment = (CardView) findViewById(R.id.uppremolar1left12chippedtreatment);
        CardView upcanineleft11chippedtreatment = (CardView) findViewById(R.id.upcanineleft11chippedtreatment);
        CardView upincisor2left10chippedtreatment = (CardView) findViewById(R.id.upincisor2left10chippedtreatment);
        CardView upincisor1left9chippedtreatment = (CardView) findViewById(R.id.upincisor1left9chippedtreatment);
        CardView upincisor1right8chippedtreatment = (CardView) findViewById(R.id.upincisor1right8chippedtreatment);
        CardView upincisor2right7chippedtreatment = (CardView) findViewById(R.id.upincisor2right7chippedtreatment);
        CardView upcanineright6chippedtreatment = (CardView) findViewById(R.id.upcanineright6chippedtreatment);
        CardView uppremolar1right5chippedtreatment = (CardView) findViewById(R.id.uppremolar1right5chippedtreatment);
        CardView uppremolar2right4chippedtreatment = (CardView) findViewById(R.id.uppremolar2right4chippedtreatment);
        CardView upmolar1right3chippedtreatment = (CardView) findViewById(R.id.upmolar1right3chippedtreatment);
        CardView upmolar2right2chippedtreatment = (CardView) findViewById(R.id.upmolar2right2chippedtreatment);
        CardView upmolar3right1chippedtreatment = (CardView) findViewById(R.id.upmolar3right1chippedtreatment);
        CardView lowermolar3right1chippedtreatment = (CardView) findViewById(R.id.lowermolar3right1chippedtreatment);
        CardView lowermolar2right2chippedtreatment = (CardView) findViewById(R.id.lowermolar2right2chippedtreatment);
        CardView lowermolar1right3chippedtreatment = (CardView) findViewById(R.id.lowermolar1right3chippedtreatment);
        CardView lowerpremolar2right4chippedtreatment = (CardView) findViewById(R.id.lowerpremolar2right4chippedtreatment);
        CardView lowerpremolar1right5chippedtreatment = (CardView) findViewById(R.id.lowerpremolar1right5chippedtreatment);
        CardView lowercanineright6chippedtreatment = (CardView) findViewById(R.id.lowercanineright6chippedtreatment);
        CardView lowerincisor2right7chippedtreatment = (CardView) findViewById(R.id.lowerincisor2right7chippedtreatment);
        CardView lowerincisor1right8chippedtreatment = (CardView) findViewById(R.id.lowerincisor1right8chippedtreatment);
        CardView lowerincisor1left9chippedtreatment = (CardView) findViewById(R.id.lowerincisor1left9chippedtreatment);
        CardView lowerincisor2left10chippedtreatment = (CardView) findViewById(R.id.lowerincisor2left10chippedtreatment);
        CardView lowercanineleft11chippedtreatment = (CardView) findViewById(R.id.lowercanineleft11chippedtreatment);
        CardView lowerpremolar1left12chippedtreatment = (CardView) findViewById(R.id.lowerpremolar1left12chippedtreatment);
        CardView lowerpremolar2left13chippedtreatment = (CardView) findViewById(R.id.lowerpremolar2left13chippedtreatment);
        CardView lowermolar1left14chippedtreatment = (CardView) findViewById(R.id.lowermolar1left14chippedtreatment);
        CardView lowermolar2left15chippedtreatment = (CardView) findViewById(R.id.lowermolar2left15chippedtreatment);
        CardView lowermolar3left16chippedtreatment = (CardView) findViewById(R.id.lowermolar3left16chippedtreatment);

        // Decay Teeth.
        CardView upmolar3left16decaytreatment = (CardView) findViewById(R.id.upmolar3left16decaytreatment);
        CardView upmolar2left15decaytreatment = (CardView) findViewById(R.id.upmolar2left15decaytreatment);
        CardView upmolar1left14decaytreatment = (CardView) findViewById(R.id.upmolar1left14decaytreatment);
        CardView uppremolar2left13decaytreatment = (CardView) findViewById(R.id.uppremolar2left13decaytreatment);
        CardView uppremolar1left12decaytreatment = (CardView) findViewById(R.id.uppremolar1left12decaytreatment);
        CardView upcanineleft11decaytreatment = (CardView) findViewById(R.id.upcanineleft11decaytreatment);
        CardView upincisor2left10decaytreatment = (CardView) findViewById(R.id.upincisor2left10decaytreatment);
        CardView upincisor1left9decaytreatment = (CardView) findViewById(R.id.upincisor1left9decaytreatment);
        CardView upincisor1right8decaytreatment = (CardView) findViewById(R.id.upincisor1right8decaytreatment);
        CardView upincisor2right7decaytreatment = (CardView) findViewById(R.id.upincisor2right7decaytreatment);
        CardView upcanineright6decaytreatment = (CardView) findViewById(R.id.upcanineright6decaytreatment);
        CardView uppremolar1right5decaytreatment = (CardView) findViewById(R.id.uppremolar1right5decaytreatment);
        CardView uppremolar2right4decaytreatment = (CardView) findViewById(R.id.uppremolar2right4decaytreatment);
        CardView upmolar1right3decaytreatment = (CardView) findViewById(R.id.upmolar1right3decaytreatment);
        CardView upmolar2right2decaytreatment = (CardView) findViewById(R.id.upmolar2right2decaytreatment);
        CardView upmolar3right1decaytreatment = (CardView) findViewById(R.id.upmolar3right1decaytreatment);
        CardView lowermolar3right1decaytreatment = (CardView) findViewById(R.id.lowermolar3right1decaytreatment);
        CardView lowermolar2right2decaytreatment = (CardView) findViewById(R.id.lowermolar2right2decaytreatment);
        CardView lowermolar1right3decaytreatment = (CardView) findViewById(R.id.lowermolar1right3decaytreatment);
        CardView lowerpremolar2right4decaytreatment = (CardView) findViewById(R.id.lowerpremolar2right4decaytreatment);
        CardView lowerpremolar1right5decaytreatment = (CardView) findViewById(R.id.lowerpremolar1right5decaytreatment);
        CardView lowercanineright6decaytreatment = (CardView) findViewById(R.id.lowercanineright6decaytreatment);
        CardView lowerincisor2right7decaytreatment = (CardView) findViewById(R.id.lowerincisor2right7decaytreatment);
        CardView lowerincisor1right8decaytreatment = (CardView) findViewById(R.id.lowerincisor1right8decaytreatment);
        CardView lowerincisor1left9decaytreatment = (CardView) findViewById(R.id.lowerincisor1left9decaytreatment);
        CardView lowerincisor2left10decaytreatment = (CardView) findViewById(R.id.lowerincisor2left10decaytreatment);
        CardView lowercanineleft11decaytreatment = (CardView) findViewById(R.id.lowercanineleft11decaytreatment);
        CardView lowerpremolar1left12decaytreatment = (CardView) findViewById(R.id.lowerpremolar1left12decaytreatment);
        CardView lowerpremolar2left13decaytreatment = (CardView) findViewById(R.id.lowerpremolar2left13decaytreatment);
        CardView lowermolar1left14decaytreatment = (CardView) findViewById(R.id.lowermolar1left14decaytreatment);
        CardView lowermolar2left15decaytreatment = (CardView) findViewById(R.id.lowermolar2left15decaytreatment);
        CardView lowermolar3left16decaytreatment = (CardView) findViewById(R.id.lowermolar3left16decaytreatment);

        // Lost Teeth.
        CardView upmolar3left16losstreatment = (CardView) findViewById(R.id.upmolar3left16losstreatment);
        CardView upmolar2left15losstreatment = (CardView) findViewById(R.id.upmolar2left15losstreatment);
        CardView upmolar1left14losstreatment = (CardView) findViewById(R.id.upmolar1left14losstreatment);
        CardView uppremolar2left13losstreatment = (CardView) findViewById(R.id.uppremolar2left13losstreatment);
        CardView uppremolar1left12losstreatment = (CardView) findViewById(R.id.uppremolar1left12losstreatment);
        CardView upcanineleft11losstreatment = (CardView) findViewById(R.id.upcanineleft11losstreatment);
        CardView upincisor2left10losstreatment = (CardView) findViewById(R.id.upincisor2left10losstreatment);
        CardView upincisor1left9losstreatment = (CardView) findViewById(R.id.upincisor1left9losstreatment);
        CardView upincisor1right8losstreatment = (CardView) findViewById(R.id.upincisor1right8losstreatment);
        CardView upincisor2right7losstreatment = (CardView) findViewById(R.id.upincisor2right7losstreatment);
        CardView upcanineright6losstreatment = (CardView) findViewById(R.id.upcanineright6losstreatment);
        CardView uppremolar1right5losstreatment = (CardView) findViewById(R.id.uppremolar1right5losstreatment);
        CardView uppremolar2right4losstreatment = (CardView) findViewById(R.id.uppremolar2right4losstreatment);
        CardView upmolar1right3losstreatment = (CardView) findViewById(R.id.upmolar1right3losstreatment);
        CardView upmolar2right2losstreatment = (CardView) findViewById(R.id.upmolar2right2losstreatment);
        CardView upmolar3right1losstreatment = (CardView) findViewById(R.id.upmolar3right1losstreatment);
        CardView lowermolar3right1losstreatment = (CardView) findViewById(R.id.lowermolar3right1losstreatment);
        CardView lowermolar2right2losstreatment = (CardView) findViewById(R.id.lowermolar2right2losstreatment);
        CardView lowermolar1right3losstreatment = (CardView) findViewById(R.id.lowermolar1right3losstreatment);
        CardView lowerpremolar2right4losstreatment = (CardView) findViewById(R.id.lowerpremolar2right4losstreatment);
        CardView lowerpremolar1right5losstreatment = (CardView) findViewById(R.id.lowerpremolar1right5losstreatment);
        CardView lowercanineright6losstreatment = (CardView) findViewById(R.id.lowercanineright6losstreatment);
        CardView lowerincisor2right7losstreatment = (CardView) findViewById(R.id.lowerincisor2right7losstreatment);
        CardView lowerincisor1right8losstreatment = (CardView) findViewById(R.id.lowerincisor1right8losstreatment);
        CardView lowerincisor1left9losstreatment = (CardView) findViewById(R.id.lowerincisor1left9losstreatment);
        CardView lowerincisor2left10losstreatment = (CardView) findViewById(R.id.lowerincisor2left10losstreatment);
        CardView lowercanineleft11losstreatment = (CardView) findViewById(R.id.lowercanineleft11losstreatment);
        CardView lowerpremolar1left12losstreatment = (CardView) findViewById(R.id.lowerpremolar1left12losstreatment);
        CardView lowerpremolar2left13losstreatment = (CardView) findViewById(R.id.lowerpremolar2left13losstreatment);
        CardView lowermolar1left14losstreatment = (CardView) findViewById(R.id.lowermolar1left14losstreatment);
        CardView lowermolar2left15losstreatment = (CardView) findViewById(R.id.lowermolar2left15losstreatment);
        CardView lowermolar3left16losstreatment = (CardView) findViewById(R.id.lowermolar3left16losstreatment);





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



    // Healthy


        // Click Listeners!

        upmolar3left16healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));
            }
        });
        upmolar2left15healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upmolar1left14healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        uppremolar2left13healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        uppremolar1left12healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upcanineleft11healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upincisor2left10healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upincisor1left9healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upincisor1right8healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upincisor2right7healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upcanineright6healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        uppremolar1right5healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        uppremolar2right4healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upmolar1right3healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upmolar2right2healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        upmolar3right1healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });

        // Lower Healthy
        lowermolar3right1healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowermolar2right2healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowermolar1right3healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerpremolar2right4healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerpremolar1right5healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowercanineright6healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerincisor2right7healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerincisor1right8healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerincisor1left9healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerincisor2left10healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowercanineleft11healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerpremolar1left12healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowerpremolar2left13healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowermolar1left14healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowermolar2left15healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });
        lowermolar3left16healthytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=keep+your++teeth+healthy+and+clean")));            }
        });

        // Chipped

        // Click Listeners!

        upmolar3left16chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upmolar2left15chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upmolar1left14chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        uppremolar2left13chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        uppremolar1left12chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upcanineleft11chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upincisor2left10chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upincisor1left9chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upincisor1right8chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upincisor2right7chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upcanineright6chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        uppremolar1right5chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        uppremolar2right4chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upmolar1right3chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upmolar2right2chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        upmolar3right1chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });

        // Lower Chipped
        lowermolar3right1chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowermolar2right2chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowermolar1right3chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerpremolar2right4chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerpremolar1right5chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowercanineright6chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerincisor2right7chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerincisor1right8chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerincisor1left9chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerincisor2left10chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowercanineleft11chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerpremolar1left12chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowerpremolar2left13chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowermolar1left14chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowermolar2left15chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });
        lowermolar3left16chippedtreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=chipped+tooth+treatment")));
            }
        });

        // Decay

        // Click Listeners!

        upmolar3left16decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upmolar2left15decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upmolar1left14decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        uppremolar2left13decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        uppremolar1left12decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upcanineleft11decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upincisor2left10decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upincisor1left9decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upincisor1right8decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upincisor2right7decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upcanineright6decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        uppremolar1right5decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        uppremolar2right4decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upmolar1right3decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upmolar2right2decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        upmolar3right1decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });

        // Lower Healthy
        lowermolar3right1decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowermolar2right2decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowermolar1right3decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerpremolar2right4decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerpremolar1right5decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowercanineright6decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerincisor2right7decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerincisor1right8decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerincisor1left9decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerincisor2left10decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowercanineleft11decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerpremolar1left12decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowerpremolar2left13decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowermolar1left14decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowermolar2left15decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });
        lowermolar3left16decaytreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=decay+tooth+treament")));
            }
        });

        // Lost Teeth

        // Click Listeners!

        upmolar3left16losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upmolar2left15losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upmolar1left14losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        uppremolar2left13losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        uppremolar1left12losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upcanineleft11losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upincisor2left10losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upincisor1left9losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upincisor1right8losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upincisor2right7losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upcanineright6losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        uppremolar1right5losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        uppremolar2right4losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upmolar1right3losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upmolar2right2losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        upmolar3right1losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });

        // Lower Healthy
        lowermolar3right1losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowermolar2right2losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowermolar1right3losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerpremolar2right4losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerpremolar1right5losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowercanineright6losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerincisor2right7losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerincisor1right8losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerincisor1left9losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerincisor2left10losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowercanineleft11losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerpremolar1left12losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowerpremolar2left13losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowermolar1left14losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowermolar2left15losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });
        lowermolar3left16losstreatment.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(Intent.ACTION_VIEW,
                        Uri.parse("https://www.google.com/search?q=lost+tooth+treatment")));
            }
        });


        //TextView sample = (TextView) findViewById(R.id.sample_text);
        if (getIntent() != null && getIntent().getExtras() != null && getIntent().hasExtra(StoragePredictionActivity.LABEL_LIST)) {


            for (int i = 0; i < 30; i++) {
                ArrayList<String> classList = (ArrayList<String>) getIntent().getSerializableExtra(StoragePredictionActivity.LABEL_LIST);

//                    sample.setText(classList.toString());
//                    System.out.println(classList);

                if(classList.toString().contains("u16")){

                    if(classList.contains("u16healthy")){
                        upmolar3left16healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16decay")){
                        upmolar3left16decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16chipped")){
                        upmolar3left16chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u16loss")){
                        upmolar3left16losstreatment.setVisibility(View.VISIBLE);
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
                        upmolar2left15healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15decay")){
                        upmolar2left15decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15chipped")){
                        upmolar2left15chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u15loss")){
                        upmolar2left15losstreatment.setVisibility(View.VISIBLE);
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
                        upmolar1left14healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14decay")){
                        upmolar1left14decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14chipped")){
                        upmolar1left14chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u14loss")){
                        upmolar1left14chippedtreatment.setVisibility(View.VISIBLE);
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
                        uppremolar2left13healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13decay")){
                        uppremolar2left13decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13chipped")){
                        uppremolar2left13chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u13loss")){
                        uppremolar2left13losstreatment.setVisibility(View.VISIBLE);
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
                        uppremolar1left12healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12decay")){
                        uppremolar1left12decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12chipped")){
                        uppremolar1left12chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u12loss")){
                        uppremolar1left12losstreatment.setVisibility(View.VISIBLE);
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
                        upcanineleft11healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11decay")){
                        upcanineleft11decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11chipped")){
                        upcanineleft11chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u11loss")){
                        upcanineleft11losstreatment.setVisibility(View.VISIBLE);
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
                        upincisor2left10healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10decay")){
                        upincisor2left10decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10chipped")){
                        upincisor2left10chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u10loss")){
                        upincisor2left10losstreatment.setVisibility(View.VISIBLE);
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
                        upincisor1left9healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9decay")){
                        upincisor1left9decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9chipped")){
                        upincisor1left9chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u9loss")){
                        upincisor1left9losstreatment.setVisibility(View.VISIBLE);
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
                        upincisor1right8healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8decay")){
                        upincisor1right8decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8chipped")){
                        upincisor1right8chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u8loss")){
                        upincisor1right8losstreatment.setVisibility(View.VISIBLE);

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
                        upincisor2right7healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7decay")){
                        upincisor2right7decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7chipped")){
                        upincisor2right7chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u7loss")){
                        upincisor2right7losstreatment.setVisibility(View.VISIBLE);
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
                        upcanineright6healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6decay")){
                        upcanineright6decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6chipped")){
                        upcanineright6chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u6loss")){
                        upcanineright6losstreatment.setVisibility(View.VISIBLE);
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
                        uppremolar1right5healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5decay")){
                        uppremolar1right5decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5chipped")){
                        uppremolar1right5chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u5loss")){
                        uppremolar1right5losstreatment.setVisibility(View.VISIBLE);
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
                        uppremolar2right4healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4decay")){
                        uppremolar2right4decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4chipped")){
                        uppremolar2right4chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u4loss")){
                        uppremolar2right4losstreatment.setVisibility(View.VISIBLE);
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
                        upmolar1right3healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3decay")){
                        upmolar1right3decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3chipped")){
                        upmolar1right3chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u3loss")){
                        upmolar1right3losstreatment.setVisibility(View.VISIBLE);
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
                        upmolar2right2healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2decay")){
                        upmolar2right2decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2chipped")){
                        upmolar2right2chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u2loss")){
                        upmolar2right2losstreatment.setVisibility(View.VISIBLE);
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
                        upmolar3right1healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1decay")){
                        upmolar3right1decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1chipped")){
                        upmolar3right1chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("u1loss")){
                        upmolar3right1losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar3left16healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16decay")){
                        lowermolar3left16decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16chipped")){
                        lowermolar3left16chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i16loss")){
                        lowermolar3left16losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar2left15healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15decay")){
                        lowermolar2left15decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15chipped")){
                        lowermolar2left15chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i15loss")){
                        lowermolar2left15losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar1left14healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14decay")){
                        lowermolar1left14decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14chipped")){
                        lowermolar1left14chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i14loss")){
                        lowermolar1left14losstreatment.setVisibility(View.VISIBLE);
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
                        lowerpremolar2left13healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13decay")){
                        lowerpremolar2left13decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13chipped")){
                        lowerpremolar2left13chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i13loss")){
                        lowerpremolar2left13losstreatment.setVisibility(View.VISIBLE);
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
                        lowerpremolar1left12healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12decay")){
                        lowerpremolar1left12decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12chipped")){
                        lowerpremolar1left12chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i12loss")){
                        lowerpremolar1left12losstreatment.setVisibility(View.VISIBLE);
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
                        lowercanineleft11healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11decay")){
                        lowercanineleft11decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11chipped")){
                        lowercanineleft11chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i11loss")){
                        lowercanineleft11losstreatment.setVisibility(View.VISIBLE);
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
                        lowerincisor2left10healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10decay")){
                        lowerincisor2left10decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10chipped")){
                        lowerincisor2left10chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i10loss")){
                        lowerincisor2left10losstreatment.setVisibility(View.VISIBLE);
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
                        lowerincisor1left9healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9decay")){
                        lowerincisor1left9decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9chipped")){
                        lowerincisor1left9chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i9loss")){
                        lowerincisor1left9losstreatment.setVisibility(View.VISIBLE);
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
                        lowerincisor1right8healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8decay")){
                        lowerincisor1right8decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8chipped")){
                        lowerincisor1right8chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i8loss")){
                        lowerincisor1right8losstreatment.setVisibility(View.VISIBLE);
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
                        lowerincisor2right7healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7decay")){
                        lowerincisor2right7decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7chipped")){
                        lowerincisor2right7chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i7loss")){
                        lowerincisor2right7losstreatment.setVisibility(View.VISIBLE);
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
                        lowercanineright6healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6decay")){
                        lowercanineright6decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6chipped")){
                        lowercanineright6chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i6loss")){
                        lowercanineright6losstreatment.setVisibility(View.VISIBLE);
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
                        lowerpremolar1right5healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5decay")){
                        lowerpremolar1right5decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5chipped")){
                        lowerpremolar1right5chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i5loss")){
                        lowerpremolar1right5losstreatment.setVisibility(View.VISIBLE);
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
                        lowerpremolar2right4healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4decay")){
                        lowerpremolar2right4decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4chipped")){
                        lowerpremolar2right4chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i4loss")){
                        lowerpremolar2right4losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar1right3healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3decay")){
                        lowermolar1right3decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3chipped")){
                        lowermolar1right3chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i3loss")){
                        lowermolar1right3losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar2right2healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2decay")){
                        lowermolar2right2decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2chipped")){
                        lowermolar2right2chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i2loss")){
                        lowermolar2right2losstreatment.setVisibility(View.VISIBLE);
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
                        lowermolar3right1healthytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1decay")){
                        lowermolar3right1decaytreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1chipped")){
                        lowermolar3right1chippedtreatment.setVisibility(View.VISIBLE);
                    }
                    else if(classList.contains("i1loss")){
                        lowermolar3right1losstreatment.setVisibility(View.VISIBLE);
                    }
                    else{
                        lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                    }

                }
                else{
                    lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
                }


//                if (classList.contains("molar") && classList.contains("incisor")) {
//                    // sample2.setText("Hello");
////
//                    upmolar3left16healthytreatment.setVisibility(View.VISIBLE);
//                    upmolar2left15healthytreatment.setVisibility(View.VISIBLE);
//                    upmolar1left14healthytreatment.setVisibility(View.VISIBLE);
//                    uppremolar2left13healthytreatment.setVisibility(View.VISIBLE);
//                    uppremolar1left12healthytreatment.setVisibility(View.VISIBLE);
//                    upcanineleft11healthytreatment.setVisibility(View.VISIBLE);
//                    upincisor2left10healthytreatment.setVisibility(View.VISIBLE);
//                    upincisor1left9healthytreatment.setVisibility(View.VISIBLE);
//                    upincisor1right8healthytreatment.setVisibility(View.VISIBLE);
//                    upincisor2right7healthytreatment.setVisibility(View.VISIBLE);
//                    upcanineright6healthytreatment.setVisibility(View.VISIBLE);
//                    uppremolar1right5healthytreatment.setVisibility(View.VISIBLE);
//                    uppremolar2right4healthytreatment.setVisibility(View.VISIBLE);
//                    upmolar1right3healthytreatment.setVisibility(View.VISIBLE);
//                    upmolar2right2healthytreatment.setVisibility(View.VISIBLE);
//                    upmolar3right1healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar3right1healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar2right2healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar1right3healthytreatment.setVisibility(View.VISIBLE);
//                    lowerpremolar2right4healthytreatment.setVisibility(View.VISIBLE);
//                    lowerpremolar1right5healthytreatment.setVisibility(View.VISIBLE);
//                    lowercanineright6healthytreatment.setVisibility(View.VISIBLE);
//                    lowerincisor2right7healthytreatment.setVisibility(View.VISIBLE);
//                    lowerincisor1right8healthytreatment.setVisibility(View.VISIBLE);
//                    lowerincisor1left9healthytreatment.setVisibility(View.VISIBLE);
//                    lowerincisor2left10healthytreatment.setVisibility(View.VISIBLE);
//                    lowercanineleft11healthytreatment.setVisibility(View.VISIBLE);
//                    lowerpremolar1left12healthytreatment.setVisibility(View.VISIBLE);
//                    lowerpremolar2left13healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar1left14healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar2left15healthytreatment.setVisibility(View.VISIBLE);
//                    lowermolar3left16healthytreatment.setVisibility(View.VISIBLE);
//                   }
//
//                    // TextView sample2 = (TextView) findViewById(R.id.sample_text2);
//                    else if (classList.contains("molar")) {
//                        // sample2.setText("Hello");
//
//                        upmolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//                        upmolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                        upmolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                        uppremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                        uppremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                        upcanineright11neutralanalysis.setVisibility(View.VISIBLE);
//                        upincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                        upincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                        upincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                        upincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                        upcanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                        uppremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                        uppremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                        upmolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                        upmolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                        upmolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar3right1neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar2right2neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar1right3neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerpremolar2right4neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerpremolar1right5neutralanalysis.setVisibility(View.VISIBLE);
//                        lowercanineright6neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerincisor2right7neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerincisor1right8neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerincisor1left9neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerincisor2left10neutralanalysis.setVisibility(View.VISIBLE);
//                        lowercanineleft11neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerpremolar1left12neutralanalysis.setVisibility(View.VISIBLE);
//                        lowerpremolar2left13neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar1left14neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar2left15neutralanalysis.setVisibility(View.VISIBLE);
//                        lowermolar3left16neutralanalysis.setVisibility(View.VISIBLE);
//
//                }


            }
        }
    }
}