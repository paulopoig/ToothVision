package com.example.imagepro;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;

import org.opencv.android.Utils;
import org.opencv.core.CvType;
import org.opencv.core.Mat;
import org.opencv.core.Point;
import org.opencv.core.Scalar;
import org.opencv.imgproc.Imgproc;
import org.tensorflow.lite.Interpreter;
import org.tensorflow.lite.gpu.GpuDelegate;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

import ChippedLowerTeethActivities.Lowercanineleft11chippedActivity;
import ChippedLowerTeethActivities.Lowercanineright6chippedActivity;
import ChippedLowerTeethActivities.Lowerincisor1left9chippedActvitiy;
import ChippedLowerTeethActivities.Lowerincisor1right8chippedActivity;
import ChippedLowerTeethActivities.Lowerincisor2left10chippedActivity;
import ChippedLowerTeethActivities.Lowerincisor2right7chippedActivity;
import ChippedLowerTeethActivities.Lowermolar1left14chippedActivity;
import ChippedLowerTeethActivities.Lowermolar1right3chippedActivity;
import ChippedLowerTeethActivities.Lowermolar2left15chippedActivity;
import ChippedLowerTeethActivities.Lowermolar2right2chippedActivity;
import ChippedLowerTeethActivities.Lowermolar3left16chippedActivity;
import ChippedLowerTeethActivities.Lowermolar3right1chippedActivity;
import ChippedLowerTeethActivities.Lowerpremolar1left12chippedActivity;
import ChippedLowerTeethActivities.Lowerpremolar1right5chippedActivity;
import ChippedLowerTeethActivities.Lowerpremolar2left13chippedActivity;
import ChippedLowerTeethActivities.Lowerpremolar2right4chippedActivity;
import ChippedUpperTeethActivities.Upcanineleft11chippedActivity;
import ChippedUpperTeethActivities.Upcanineright6chippedActivity;
import ChippedUpperTeethActivities.Upincisor1left9chippedActivity;
import ChippedUpperTeethActivities.Upincisor1right8chippedActivity;
import ChippedUpperTeethActivities.Upincisor2left10chippedActivity;
import ChippedUpperTeethActivities.Upincisor2right7chippedActivity;
import ChippedUpperTeethActivities.Upmolar1left14chippedActivity;
import ChippedUpperTeethActivities.Upmolar1right3chippedActivity;
import ChippedUpperTeethActivities.Upmolar2left15chippedActivity;
import ChippedUpperTeethActivities.Upmolar2right2chippedActivity;
import ChippedUpperTeethActivities.Upmolar3left16chippedActivity;
import ChippedUpperTeethActivities.Upmolar3right1chippedActivity;
import ChippedUpperTeethActivities.Uppremolar1left12chippedActivity;
import ChippedUpperTeethActivities.Uppremolar1right5chippedActivity;
import ChippedUpperTeethActivities.Uppremolar2left13chippedActivity;
import ChippedUpperTeethActivities.Uppremolar2right4chippedActvity;
import DecayLowerTeethActivities.Lowercanineleft11decayActivity;
import DecayLowerTeethActivities.Lowercanineright6decayActivity;
import DecayLowerTeethActivities.Lowerincisor1left9decayActivity;
import DecayLowerTeethActivities.Lowerincisor1right8decayActivity;
import DecayLowerTeethActivities.Lowerincisor2left10decayActivity;
import DecayLowerTeethActivities.Lowerincisor2right7decayActivity;
import DecayLowerTeethActivities.Lowermolar1left14decayActivity;
import DecayLowerTeethActivities.Lowermolar1right3decayActivity;
import DecayLowerTeethActivities.Lowermolar2left15decayActivity;
import DecayLowerTeethActivities.Lowermolar2right2decayActivity;
import DecayLowerTeethActivities.Lowermolar3left16decayActivity;
import DecayLowerTeethActivities.Lowermolar3right1decayActivity;
import DecayLowerTeethActivities.Lowerpremolar1left12decayActivity;
import DecayLowerTeethActivities.Lowerpremolar1right5decayActivity;
import DecayLowerTeethActivities.Lowerpremolar2left13decayActivity;
import DecayLowerTeethActivities.Lowerpremolar2right4decayActivity;
import DecayUpperTeethActivities.Upcanineleft11decayActivity;
import DecayUpperTeethActivities.Upcanineright6decayActivity;
import DecayUpperTeethActivities.Upincisor1left9decayActivity;
import DecayUpperTeethActivities.Upincisor1right8decayActivity;
import DecayUpperTeethActivities.Upincisor2left10decayActivity;
import DecayUpperTeethActivities.Upincisor2right7decayActivity;
import DecayUpperTeethActivities.Upmolar1left14decayActivity;
import DecayUpperTeethActivities.Upmolar1right3decayActivity;
import DecayUpperTeethActivities.Upmolar2left15decayActivity;
import DecayUpperTeethActivities.Upmolar2right2decayActivity;
import DecayUpperTeethActivities.Upmolar3left16decayActivity;
import DecayUpperTeethActivities.Upmolar3right1decayActivity;
import DecayUpperTeethActivities.Uppremolar1left12decayActivity;
import DecayUpperTeethActivities.Uppremolar1right5decayActivity;
import DecayUpperTeethActivities.Uppremolar2left13decayActivity;
import DecayUpperTeethActivities.Uppremolar2right4decayActivity;
import HealthyLowerTeethActivities.Lowercanineleft11healthyActivity;
import HealthyLowerTeethActivities.Lowercanineright6healthyActivity;
import HealthyLowerTeethActivities.Lowerincisor1left9healthyActivity;
import HealthyLowerTeethActivities.Lowerincisor1right8healthyActivity;
import HealthyLowerTeethActivities.Lowerincisor2left10healthyActivity;
import HealthyLowerTeethActivities.Lowerincisor2right7healthyActivity;
import HealthyLowerTeethActivities.Lowermolar1left14healthyActivity;
import HealthyLowerTeethActivities.Lowermolar1right3healthyActivity;
import HealthyLowerTeethActivities.Lowermolar2left15healthyActivity;
import HealthyLowerTeethActivities.Lowermolar2right2healthyActivity;
import HealthyLowerTeethActivities.Lowermolar3left16healthyActivity;
import HealthyLowerTeethActivities.Lowermolar3right1healthyActivity;
import HealthyLowerTeethActivities.Lowerpremolar1left12healthyActivity;
import HealthyLowerTeethActivities.Lowerpremolar1right5healthyActivity;
import HealthyLowerTeethActivities.Lowerpremolar2left13healthyActivity;
import HealthyLowerTeethActivities.Lowerpremolar2right4healthyActivity;
import HealthyUpperTeethActivities.Upcanineleft11healthyActivity;
import HealthyUpperTeethActivities.Upcanineright6healthyActivity;
import HealthyUpperTeethActivities.Upincisor1left9healthyActivity;
import HealthyUpperTeethActivities.Upincisor1right8healthyActivity;
import HealthyUpperTeethActivities.Upincisor2left10healthyActivity;
import HealthyUpperTeethActivities.Upincisor2right7healthyActivity;
import HealthyUpperTeethActivities.Upmolar1left14healthyActivity;
import HealthyUpperTeethActivities.Upmolar1right3healthyActivity;
import HealthyUpperTeethActivities.Upmolar2left15healthyActivity;
import HealthyUpperTeethActivities.Upmolar2right2healthyActivity;
import HealthyUpperTeethActivities.Upmolar3left16healthyActivity;
import HealthyUpperTeethActivities.Upmolar3right1healthyActivity;
import HealthyUpperTeethActivities.Uppremolar1left12healthyActivity;
import HealthyUpperTeethActivities.Uppremolar1right5healthyActivity;
import HealthyUpperTeethActivities.Uppremolar2left13healthyActivity;
import HealthyUpperTeethActivities.Uppremolar2right4healthyActivity;
import LostLowerTeethActivities.Lowercanineleft11lossActivity;
import LostLowerTeethActivities.Lowercanineright6lossActivity;
import LostLowerTeethActivities.Lowerincisor1left9lossActivity;
import LostLowerTeethActivities.Lowerincisor1right8lossActivity;
import LostLowerTeethActivities.Lowerincisor2left10lossActivity;
import LostLowerTeethActivities.Lowerincisor2right7lossActivity;
import LostLowerTeethActivities.Lowermolar1left14lossActivity;
import LostLowerTeethActivities.Lowermolar1right3lossActivity;
import LostLowerTeethActivities.Lowermolar2left15lossActivity;
import LostLowerTeethActivities.Lowermolar2right2lossActivity;
import LostLowerTeethActivities.Lowermolar3left16lossActivity;
import LostLowerTeethActivities.Lowermolar3right1lossActivity;
import LostLowerTeethActivities.Lowerpremolar1left12lossActivity;
import LostLowerTeethActivities.Lowerpremolar1right5lossActivity;
import LostLowerTeethActivities.Lowerpremolar2left13lossActivity;
import LostLowerTeethActivities.Lowerpremolar2right4lossActivity;
import LostUpperTeethActivities.Upcanineleft11lossActivity;
import LostUpperTeethActivities.Upcanineright6lossActivity;
import LostUpperTeethActivities.Upincisor1left9lossActivity;
import LostUpperTeethActivities.Upincisor1right8lossActivity;
import LostUpperTeethActivities.Upincisor2left10lossActivity;
import LostUpperTeethActivities.Upmolar1left14lossActivity;
import LostUpperTeethActivities.Upmolar1right3lossActivity;
import LostUpperTeethActivities.Upmolar2left15lossActivity;
import LostUpperTeethActivities.Upmolar2right2lossActivity;
import LostUpperTeethActivities.Upmolar3left16lossActivity;
import LostUpperTeethActivities.Upmolar3right1lossActivity;
import LostUpperTeethActivities.Uppremolar1left12lossActivity;
import LostUpperTeethActivities.Uppremolar1right5lossActivity;
import LostUpperTeethActivities.Uppremolar2left13lossActivity;
import LostUpperTeethActivities.Uppremolar2right4lossActivity;
import LowerTeethActivities.Lowercanineleft11Activity;
import LowerTeethActivities.Lowercanineright6Activity;
import LowerTeethActivities.Lowerincisor1left9Activity;
import LowerTeethActivities.Lowerincisor1right8Activity;
import LowerTeethActivities.Lowerincisor2left10Activity;
import LowerTeethActivities.Lowerincisor2right7Activity;
import LowerTeethActivities.Lowermolar1left14Activity;
import LowerTeethActivities.Lowermolar1right3Activity;
import LowerTeethActivities.Lowermolar2left15Activity;
import LowerTeethActivities.Lowermolar2right2Activity;
import LowerTeethActivities.Lowermolar3left16Activity;
import LowerTeethActivities.Lowermolar3right1Activity;
import LowerTeethActivities.Lowerpremolar1left12Activity;
import LowerTeethActivities.Lowerpremolar1right5Activity;
import LowerTeethActivities.Lowerpremolar2left13Activity;
import LowerTeethActivities.Lowerpremolar2right4Activity;
import UpperTeethActivities.Upcanineleft11Activity;
import UpperTeethActivities.Upcanineright6Activity;
import UpperTeethActivities.Upincisor1left9Activity;
import UpperTeethActivities.Upincisor1right8Activity;
import UpperTeethActivities.Upincisor2left10Activity;
import UpperTeethActivities.Upincisor2right7Activity;
import UpperTeethActivities.Upmolar1left14Activity;
import UpperTeethActivities.Upmolar1right3Activity;
import UpperTeethActivities.Upmolar2left15Activity;
import UpperTeethActivities.Upmolar2right2Activity;
import UpperTeethActivities.Upmolar3left16Activity;
import UpperTeethActivities.Upmolar3right1Activity;
import UpperTeethActivities.Uppremolar1left12Activity;
import UpperTeethActivities.Uppremolar1right5Activity;
import UpperTeethActivities.Uppremolar2left13Activity;
import UpperTeethActivities.Uppremolar2right4Activity;

public class StoragePredictionActivity extends AppCompatActivity {
    private static StoragePredictionActivity INSTANCE;


    // Native Defines!
    final static public String LABEL_LIST = "LABELIST";
    private Button select_image;
    private Button camera_option;
    private ImageView image_v;
    private objectDetectorClass objectDetectorClass;
    int SELECT_PICTURE;

    // Upper Teeth
    ImageView
            upmolar3L16, upmolar2L15, upmolar1L14, uppremolar1L12, uppremolar2L13, upcanineL11, upincisor2L10, upincisor1L9,
            upincisor1R8, upincisor2R7, upcanineR6, uppremolar1R5, uppremolar2R4, upmolar1R3, upmolar2R2, upmolar3R1;

    ImageView
            upmolar3L16healthy, upmolar2L15healthy, upmolar1L14healthy, uppremolar1L12healthy, uppremolar2L13healthy, upcanineL11healthy, upincisor2L10healthy, upincisor1L9healthy,
            upincisor1R8healthy, upincisor2R7healthy, upcanineR6healthy, uppremolar1R5healthy, uppremolar2R4healthy, upmolar1R3healthy, upmolar2R2healthy, upmolar3R1healthy;
    ImageView
            upmolar3L16chipped, upmolar2L15chipped, upmolar1L14chipped, uppremolar1L12chipped, uppremolar2L13chipped, upcanineL11chipped, upincisor2L10chipped, upincisor1L9chipped,
            upincisor1R8chipped, upincisor2R7chipped, upcanineR6chipped, uppremolar1R5chipped, uppremolar2R4chipped, upmolar1R3chipped, upmolar2R2chipped, upmolar3R1chipped;
    ImageView
            upmolar3L16decay, upmolar2L15decay, upmolar1L14decay, uppremolar1L12decay, uppremolar2L13decay, upcanineL11decay, upincisor2L10decay, upincisor1L9decay,
            upincisor1R8decay, upincisor2R7decay, upcanineR6decay, uppremolar1R5decay, uppremolar2R4decay, upmolar1R3decay, upmolar2R2decay, upmolar3R1decay;
    ImageView
            upmolar3L16loss, upmolar2L15loss, upmolar1L14loss, uppremolar1L12loss, uppremolar2L13loss, upcanineL11loss, upincisor2L10loss, upincisor1L9loss,
            upincisor1R8loss, upincisor2R7loss, upcanineR6loss, uppremolar1R5loss, uppremolar2R4loss, upmolar1R3loss, upmolar2R2loss, upmolar3R1loss;

    // Lower Teeth
    ImageView
            lowermolar3R1, lowermolar2R2, lowermolar1R3, lowerpremolar2R4, lowerpremolar1R5, lowercanineR6, lowerincisor2R7, lowerincisor1R8,
            lowerincisor1L9, lowerincisor2L10, lowercanineL11,lowerpremolar1L12, lowerpremolar2l13, lowermolar1L14, lowermolar2L15, lowermolar3L16;

    ImageView
            lowermolar3R1healthy, lowermolar2R2healthy, lowermolar1R3healthy, lowerpremolar2R4healthy, lowerpremolar1R5healthy, lowercanineR6healthy, lowerincisor2R7healthy,
            lowerincisor1R8healthy, lowerincisor1L9healthy, lowerincisor2L10healthy, lowercanineL11healthy,lowerpremolar1L12healthy, lowerpremolar2l13healthy,
            lowermolar1L14healthy, lowermolar2L15healthy, lowermolar3L16healthy;

    ImageView
            lowermolar3R1chipped, lowermolar2R2chipped, lowermolar1R3chipped, lowerpremolar2R4chipped, lowerpremolar1R5chipped, lowercanineR6chipped, lowerincisor2R7chipped, lowerincisor1R8chipped,
            lowerincisor1L9chipped, lowerincisor2L10chipped, lowercanineL11chipped,lowerpremolar1L12chipped, lowerpremolar2l13chipped, lowermolar1L14chipped, lowermolar2L15chipped, lowermolar3L16chipped;

    ImageView
            lowermolar3R1decay, lowermolar2R2decay, lowermolar1R3decay, lowerpremolar2R4decay, lowerpremolar1R5decay, lowercanineR6decay, lowerincisor2R7decay, lowerincisor1R8decay,
            lowerincisor1L9decay, lowerincisor2L10decay, lowercanineL11decay,lowerpremolar1L12decay, lowerpremolar2l13decay, lowermolar1L14decay, lowermolar2L15decay, lowermolar3L16decay;

    ImageView
            lowermolar3R1loss, lowermolar2R2loss, lowermolar1R3loss, lowerpremolar2R4loss, lowerpremolar1R5loss, lowercanineR6loss, lowerincisor2R7loss, lowerincisor1R8loss,
            lowerincisor1L9loss, lowerincisor2L10loss, lowercanineL11loss,lowerpremolar1L12loss, lowerpremolar2l13loss, lowermolar1L14loss, lowermolar2L15loss, lowermolar3L16loss;

    // Extras
    ImageView scan_png, switchBtn, switchBack, treatmentBtn, analysisBtn, legendBtn, augmentBtn, numbering, numbering2, legend;

    // Outside Defines (Test)!

    private Interpreter interpreter;
    // store all label in array
    private  List<String> labelList;
    private int INPUT_SIZE;
    private int PIXEL_SIZE=3; // for RGB
    private int IMAGE_MEAN=0;
    private  float IMAGE_STD=255.0f;
    // use to initialize gpu in app
    private GpuDelegate gpuDelegate;
    private int height=0;
    private  int width=0;

    // Outside Methods Defining Starts Here!

    public void objectDetect(AssetManager assetManager, String modelPath, String labelPath, int inputSize) throws IOException{
        INPUT_SIZE=inputSize;
        // use to define gpu or cpu // no. of threads
        Interpreter.Options options=new Interpreter.Options();
        gpuDelegate=new GpuDelegate();
        options.addDelegate(gpuDelegate);
        options.setNumThreads(4); // set it according to your phone
        // loading model
        interpreter=new Interpreter(loadModelFile(assetManager,modelPath),options);
        // load labelmap
        labelList=loadLabelList(assetManager,labelPath);

    }

    private List<String> loadLabelList(AssetManager assetManager, String labelPath) throws IOException {
        // to store label
        List<String> labelList=new ArrayList<>();
        // create a new reader
        BufferedReader reader=new BufferedReader(new InputStreamReader(assetManager.open(labelPath)));
        String line;
        // loop through each line and store it to labelList
        while ((line=reader.readLine())!=null){
            labelList.add(line);
        }
        reader.close();
        return labelList;
    }

    private ByteBuffer loadModelFile(AssetManager assetManager, String modelPath) throws IOException {
        // use to get description of file
        AssetFileDescriptor fileDescriptor=assetManager.openFd(modelPath);
        FileInputStream inputStream=new FileInputStream(fileDescriptor.getFileDescriptor());
        FileChannel fileChannel=inputStream.getChannel();
        long startOffset =fileDescriptor.getStartOffset();
        long declaredLength=fileDescriptor.getDeclaredLength();

        return fileChannel.map(FileChannel.MapMode.READ_ONLY,startOffset,declaredLength);
    }

    public Mat recognizePhoto(Mat mat_image){
//        // Rotate original image by 90 degree get get portrait frame
//        // this change is done in video:
//        // this will fix crashing problem of the app
//        Mat rotated_mat_image=new Mat();
//        Mat a=mat_image.t();
//        Core.flip(a,rotated_mat_image,1);
//        //release mat
//        a.release();

        // Pass mat_image
        // if you do not do this process you will get improper prediction, less no. of object
        // now convert it to bitmap
        Bitmap bitmap=null;
        bitmap=Bitmap.createBitmap(mat_image.cols(),mat_image.rows(),Bitmap.Config.ARGB_8888);
        Utils.matToBitmap(mat_image,bitmap);
        // define height and width
        height=bitmap.getHeight();
        width=bitmap.getWidth();

        // scale the bitmap to input size of model
        Bitmap scaledBitmap=Bitmap.createScaledBitmap(bitmap,INPUT_SIZE,INPUT_SIZE,false);

        // convert bitmap to bytebuffer as model input should be in it
        ByteBuffer byteBuffer=convertBitmapToByteBuffer(scaledBitmap);

        // defining output
        // 10: top 10 object detected
        // 4: there coordinate in image
        //  float[][][]result=new float[1][10][4];
        Object[] input=new Object[1];
        input[0]=byteBuffer;

        Map<Integer,Object> output_map=new TreeMap<>();
        // we are not going to use this method of output
        // instead we create treemap of three array (boxes,score,classes)


        float[][][]boxes =new float[1][40][4];
        // 10: top 10 object detected
        // 4: there coordinate in image
        float[][] scores=new float[1][40];
        // stores scores of 10 object
        float[][] classes=new float[1][40];
        // stores class of object

        // add it to object_map;
        output_map.put(1,boxes);
        output_map.put(3,classes);
        output_map.put(0,scores);

        // now predict
        interpreter.runForMultipleInputsOutputs(input,output_map);
        // Before watching this video please watch my previous 2 video of
        //      1. Loading tensorflow lite model
        //      2. Predicting object
        // In this video we will draw boxes and label it with it's name

        Object value=output_map.get(1);
        Object Object_class=output_map.get(3);
        Object score=output_map.get(0);

        // Temp! For Getting Detected Objects!
        float class_value0=(float) Array.get(Array.get(Object_class,0),0);
        float class_value1=(float) Array.get(Array.get(Object_class,0),1);
        float class_value2=(float) Array.get(Array.get(Object_class,0),2);
        float class_value3=(float) Array.get(Array.get(Object_class,0),3);
        float class_value4=(float) Array.get(Array.get(Object_class,0),4);
        float class_value5=(float) Array.get(Array.get(Object_class,0),5);
        float class_value6=(float) Array.get(Array.get(Object_class,0),6);
        float class_value7=(float) Array.get(Array.get(Object_class,0),7);
        float class_value8=(float) Array.get(Array.get(Object_class,0),8);
        float class_value9=(float) Array.get(Array.get(Object_class,0),9);
        float class_value10=(float) Array.get(Array.get(Object_class,0),10);
        float class_value11=(float) Array.get(Array.get(Object_class,0),11);
        float class_value12=(float) Array.get(Array.get(Object_class,0),12);
        float class_value13=(float) Array.get(Array.get(Object_class,0),13);
        float class_value14=(float) Array.get(Array.get(Object_class,0),14);
        float class_value15=(float) Array.get(Array.get(Object_class,0),15);
        float class_value16=(float) Array.get(Array.get(Object_class,0),16);
        float class_value17=(float) Array.get(Array.get(Object_class,0),17);
        float class_value18=(float) Array.get(Array.get(Object_class,0),18);
        float class_value19=(float) Array.get(Array.get(Object_class,0),19);
        float class_value20=(float) Array.get(Array.get(Object_class,0),20);
        float class_value21=(float) Array.get(Array.get(Object_class,0),21);
        float class_value22=(float) Array.get(Array.get(Object_class,0),22);
        float class_value23=(float) Array.get(Array.get(Object_class,0),23);
        float class_value24=(float) Array.get(Array.get(Object_class,0),24);
        float class_value25=(float) Array.get(Array.get(Object_class,0),25);
        float class_value26=(float) Array.get(Array.get(Object_class,0),26);
        float class_value27=(float) Array.get(Array.get(Object_class,0),27);
        float class_value28=(float) Array.get(Array.get(Object_class,0),28);
        float class_value29=(float) Array.get(Array.get(Object_class,0),29);
        float class_value30=(float) Array.get(Array.get(Object_class,0),30);
        float class_value31=(float) Array.get(Array.get(Object_class,0),31);
        float class_value32=(float) Array.get(Array.get(Object_class,0),32);
        float class_value33=(float) Array.get(Array.get(Object_class,0),33);
        float class_value34=(float) Array.get(Array.get(Object_class,0),34);
        float class_value35=(float) Array.get(Array.get(Object_class,0),35);
        float class_value36=(float) Array.get(Array.get(Object_class,0),36);
        float class_value37=(float) Array.get(Array.get(Object_class,0),37);
        float class_value38=(float) Array.get(Array.get(Object_class,0),38);
        float class_value39=(float) Array.get(Array.get(Object_class,0),39);


        float score_value0=(float) Array.get(Array.get(score,0),0);
        float score_value1=(float) Array.get(Array.get(score,0),1);
        float score_value2=(float) Array.get(Array.get(score,0),2);
        float score_value3=(float) Array.get(Array.get(score,0),3);
        float score_value4=(float) Array.get(Array.get(score,0),4);
        float score_value5=(float) Array.get(Array.get(score,0),5);
        float score_value6=(float) Array.get(Array.get(score,0),6);
        float score_value7=(float) Array.get(Array.get(score,0),7);
        float score_value8=(float) Array.get(Array.get(score,0),8);
        float score_value9=(float) Array.get(Array.get(score,0),9);
        float score_value10=(float) Array.get(Array.get(score,0),10);
        float score_value11=(float) Array.get(Array.get(score,0),11);
        float score_value12=(float) Array.get(Array.get(score,0),12);
        float score_value13=(float) Array.get(Array.get(score,0),13);
        float score_value14=(float) Array.get(Array.get(score,0),14);
        float score_value15=(float) Array.get(Array.get(score,0),15);
        float score_value16=(float) Array.get(Array.get(score,0),16);
        float score_value17=(float) Array.get(Array.get(score,0),17);
        float score_value18=(float) Array.get(Array.get(score,0),18);
        float score_value19=(float) Array.get(Array.get(score,0),19);
        float score_value20=(float) Array.get(Array.get(score,0),20);
        float score_value21=(float) Array.get(Array.get(score,0),21);
        float score_value22=(float) Array.get(Array.get(score,0),22);
        float score_value23=(float) Array.get(Array.get(score,0),23);
        float score_value24=(float) Array.get(Array.get(score,0),24);
        float score_value25=(float) Array.get(Array.get(score,0),25);
        float score_value26=(float) Array.get(Array.get(score,0),26);
        float score_value27=(float) Array.get(Array.get(score,0),27);
        float score_value28=(float) Array.get(Array.get(score,0),28);
        float score_value29=(float) Array.get(Array.get(score,0),29);
        float score_value30=(float) Array.get(Array.get(score,0),30);
        float score_value31=(float) Array.get(Array.get(score,0),31);
        float score_value32=(float) Array.get(Array.get(score,0),32);
        float score_value33=(float) Array.get(Array.get(score,0),33);
        float score_value34=(float) Array.get(Array.get(score,0),34);
        float score_value35=(float) Array.get(Array.get(score,0),35);
        float score_value36=(float) Array.get(Array.get(score,0),36);
        float score_value37=(float) Array.get(Array.get(score,0),37);
        float score_value38=(float) Array.get(Array.get(score,0),38);
        float score_value39=(float) Array.get(Array.get(score,0),39);

        // Loop through each object
        // As output has only 10 boxes (Absolute for labelling dental xray!)
        for (int i=0;i<40;i++){
            float class_value=(float) Array.get(Array.get(Object_class,0),i);
            float score_value=(float) Array.get(Array.get(score,0),i);
            // define threshold for score

            // here you can change threshold according to your model
            // now we will do some change to improve the app
            if(score_value>0.2 || score_value>0.3 || score_value>0.4 || score_value>0.5){
                Object box1=Array.get(Array.get(value,0),i);
                // we are multiplying it with Original height and width of frame

                float top=(float) Array.get(box1,0)*height;
                float left=(float) Array.get(box1,1)*width;
                float bottom=(float) Array.get(box1,2)*height;
                float right=(float) Array.get(box1,3)*width;
                // draw rectangle in Original frame //  starting point    // ending point of box  // color of box       thickness
                Imgproc.rectangle(mat_image,new Point(left,top),new Point(right,bottom),new Scalar(0, 255, 0, 255),2);
                // write text on frame
                // string of class name of object  // starting point                         // color of text           // size of text
                Imgproc.putText(mat_image,labelList.get((int) class_value),new Point(left,top),3,1,new Scalar(255, 0, 0, 255),2);

                System.out.println(Arrays.toString(new String[]{labelList.get((int) class_value)}));

            }
        }


//            TextView detected_classes = (TextView) findViewById(R.id.detected_classes);
//            TextView sample = (TextView) findViewById(R.id.sample);

        // Btns find id!

        switchBtn = findViewById(R.id.switchBtn);
        switchBack = findViewById(R.id.switchbackBtn);
        treatmentBtn = findViewById(R.id.treatmentBtn);
        augmentBtn = findViewById(R.id.augmentBtn);
        analysisBtn = findViewById(R.id.analysisBtn);
        legendBtn = findViewById(R.id.legendBtn);
        augmentBtn = findViewById(R.id.augmentBtn);
        numbering = findViewById(R.id.upper_numbering);
        numbering2 = findViewById(R.id.upper_numbering2);



        switchBtn.setVisibility(View.VISIBLE);
        switchBack.setVisibility(View.VISIBLE);
        treatmentBtn.setVisibility(View.VISIBLE);
        analysisBtn.setVisibility(View.VISIBLE);
        legendBtn.setVisibility(View.VISIBLE);
        augmentBtn.setVisibility(View.VISIBLE);


        // Upper Teeth Find Id HAHAHA!

        // Neutral
        upmolar3L16 = findViewById(R.id.upmolar3L16);
        upmolar2L15 = findViewById(R.id.upmolar2L15);
        upmolar1L14 = findViewById(R.id.upmolar1L14);
        uppremolar1L12 = findViewById(R.id.uppremolar1L12);
        uppremolar2L13 = findViewById(R.id.uppremolar2L13);
        upcanineL11 = findViewById(R.id.upcanineL11);
        upincisor2L10 = findViewById(R.id.upincisor2L10);
        upincisor1L9 = findViewById(R.id.upincisor1L9);
        upincisor1R8 = findViewById(R.id.upincisor1R8);
        upincisor2R7 = findViewById(R.id.upincisor2R7);
        upcanineR6 = findViewById(R.id.upcanineR6);
        uppremolar1R5 = findViewById(R.id.uppremolar1R5);
        uppremolar2R4 = findViewById(R.id.uppremolar2R4);
        upmolar1R3 = findViewById(R.id.upmolar1R3);
        upmolar2R2 = findViewById(R.id.upmolar2R2);
        upmolar3R1 = findViewById(R.id.upmolar3R1);

        // Healthy
        upmolar3L16healthy = findViewById(R.id.upmolar3L16healthy);
        upmolar2L15healthy = findViewById(R.id.upmolar2L15healthy);
        upmolar1L14healthy = findViewById(R.id.upmolar1L14healthy);
        uppremolar1L12healthy = findViewById(R.id.uppremolar1L12healthy);
        uppremolar2L13healthy = findViewById(R.id.uppremolar2L13healthy);
        upcanineL11healthy = findViewById(R.id.upcanineL11healthy);
        upincisor2L10healthy = findViewById(R.id.upincisor2L10healthy);
        upincisor1L9healthy = findViewById(R.id.upincisor1L9healthy);
        upincisor1R8healthy = findViewById(R.id.upincisor1R8healthy);
        upincisor2R7healthy = findViewById(R.id.upincisor2R7healthy);
        upcanineR6healthy = findViewById(R.id.upcanineR6healthy);
        uppremolar1R5healthy = findViewById(R.id.uppremolar1R5healthy);
        uppremolar2R4healthy = findViewById(R.id.uppremolar2R4healthy);
        upmolar1R3healthy = findViewById(R.id.upmolar1R3healthy);
        upmolar2R2healthy = findViewById(R.id.upmolar2R2healthy);
        upmolar3R1healthy = findViewById(R.id.upmolar3R1healthy);

        // Chipped
        upmolar3L16chipped = findViewById(R.id.upmolar3L16chipped);
        upmolar2L15chipped = findViewById(R.id.upmolar2L15chipped);
        upmolar1L14chipped = findViewById(R.id.upmolar1L14chipped);
        uppremolar1L12chipped = findViewById(R.id.uppremolar1L12chipped);
        uppremolar2L13chipped = findViewById(R.id.uppremolar2L13chipped);
        upcanineL11chipped = findViewById(R.id.upcanineL11chipped);
        upincisor2L10chipped = findViewById(R.id.upincisor2L10chipped);
        upincisor1L9chipped = findViewById(R.id.upincisor1L9chipped);
        upincisor1R8chipped = findViewById(R.id.upincisor1R8chipped);
        upincisor2R7chipped = findViewById(R.id.upincisor2R7chipped);
        upcanineR6chipped = findViewById(R.id.upcanineR6chipped);
        uppremolar1R5chipped = findViewById(R.id.uppremolar1R5chipped);
        uppremolar2R4chipped = findViewById(R.id.uppremolar2R4chipped);
        upmolar1R3chipped = findViewById(R.id.upmolar1R3chipped);
        upmolar2R2chipped = findViewById(R.id.upmolar2R2chipped);
        upmolar3R1chipped = findViewById(R.id.upmolar3R1chipped);

        // Decay
        upmolar3L16decay = findViewById(R.id.upmolar3L16decay);
        upmolar2L15decay = findViewById(R.id.upmolar2L15decay);
        upmolar1L14decay = findViewById(R.id.upmolar1L14decay);
        uppremolar1L12decay = findViewById(R.id.uppremolar1L12decay);
        uppremolar2L13decay = findViewById(R.id.uppremolar2L13decay);
        upcanineL11decay = findViewById(R.id.upcanineL11decay);
        upincisor2L10decay = findViewById(R.id.upincisor2L10decay);
        upincisor1L9decay = findViewById(R.id.upincisor1L9decay);
        upincisor1R8decay = findViewById(R.id.upincisor1R8decay);
        upincisor2R7decay = findViewById(R.id.upincisor2R7decay);
        upcanineR6decay = findViewById(R.id.upcanineR6decay);
        uppremolar1R5decay = findViewById(R.id.uppremolar1R5decay);
        uppremolar2R4decay = findViewById(R.id.uppremolar2R4decay);
        upmolar1R3decay = findViewById(R.id.upmolar1R3decay);
        upmolar2R2decay = findViewById(R.id.upmolar2R2decay);
        upmolar3R1decay = findViewById(R.id.upmolar3R1decay);

        //Loss
        upmolar3L16loss = findViewById(R.id.upmolar3L16loss);
        upmolar2L15loss = findViewById(R.id.upmolar2L15loss);
        upmolar1L14loss = findViewById(R.id.upmolar1L14loss);
        uppremolar1L12loss = findViewById(R.id.uppremolar1L12loss);
        uppremolar2L13loss = findViewById(R.id.uppremolar2L13loss);
        upcanineL11loss = findViewById(R.id.upcanineL11loss);
        upincisor2L10loss = findViewById(R.id.upincisor2L10loss);
        upincisor1L9loss = findViewById(R.id.upincisor1L9loss);
        upincisor1R8loss = findViewById(R.id.upincisor1R8loss);
        upincisor2R7loss = findViewById(R.id.upincisor2R7loss);
        upcanineR6loss = findViewById(R.id.upcanineR6loss);
        uppremolar1R5loss = findViewById(R.id.uppremolar1R5loss);
        uppremolar2R4loss = findViewById(R.id.uppremolar2R4loss);
        upmolar1R3loss = findViewById(R.id.upmolar1R3loss);
        upmolar2R2loss = findViewById(R.id.upmolar2R2loss);
        upmolar3R1loss = findViewById(R.id.upmolar3R1loss);

        // Lower Teeth Find Id HAHAHA!

        // Neutral
        lowermolar3R1 = findViewById(R.id.lowermolar3R1);
        lowermolar2R2 = findViewById(R.id.lowermolar2R2);
        lowermolar1R3 = findViewById(R.id.lowermolar1R3);
        lowerpremolar2R4 = findViewById(R.id.lowerpremolar2R4);
        lowerpremolar1R5 = findViewById(R.id.lowerpremolar1R5);
        lowercanineR6 = findViewById(R.id.lowercanineR6);
        lowerincisor2R7 = findViewById(R.id.lowerincisor2R7);
        lowerincisor1R8 = findViewById(R.id.lowerincisor1R8);
        lowerincisor1L9 = findViewById(R.id.lowerincisor1L9);
        lowerincisor2L10 = findViewById(R.id.lowerincisor2L10);
        lowercanineL11 = findViewById(R.id.lowercanineL11);
        lowerpremolar1L12 = findViewById(R.id.lowerpremolar1L12);
        lowerpremolar2l13 = findViewById(R.id.lowerpremolar2l13);
        lowermolar1L14 = findViewById(R.id.lowermolar1L14);
        lowermolar2L15 = findViewById(R.id.lowermolar2L15);
        lowermolar3L16 = findViewById(R.id.lowermolar3L16);

        // Healthy
        lowermolar3R1healthy = findViewById(R.id.lowermolar3R1healthy);
        lowermolar2R2healthy = findViewById(R.id.lowermolar2R2healthy);
        lowermolar1R3healthy = findViewById(R.id.lowermolar1R3healthy);
        lowerpremolar2R4healthy = findViewById(R.id.lowerpremolar2R4healthy);
        lowerpremolar1R5healthy = findViewById(R.id.lowerpremolar1R5healthy);
        lowercanineR6healthy = findViewById(R.id.lowercanineR6healthy);
        lowerincisor2R7healthy = findViewById(R.id.lowerincisor2R7healthy);
        lowerincisor1R8healthy = findViewById(R.id.lowerincisor1R8healthy);
        lowerincisor1L9healthy = findViewById(R.id.lowerincisor1L9healthy);
        lowerincisor2L10healthy = findViewById(R.id.lowerincisor2L10healthy);
        lowercanineL11healthy = findViewById(R.id.lowercanineL11healthy);
        lowerpremolar1L12healthy = findViewById(R.id.lowerpremolar1L12healthy);
        lowerpremolar2l13healthy = findViewById(R.id.lowerpremolar2l13healthy);
        lowermolar1L14healthy = findViewById(R.id.lowermolar1L14healthy);
        lowermolar2L15healthy = findViewById(R.id.lowermolar2L15healthy);
        lowermolar3L16healthy = findViewById(R.id.lowermolar3L16healthy);

        // Chipped
        lowermolar3R1chipped = findViewById(R.id.lowermolar3R1chipped);
        lowermolar2R2chipped = findViewById(R.id.lowermolar2R2chipped);
        lowermolar1R3chipped = findViewById(R.id.lowermolar1R3chipped);
        lowerpremolar2R4chipped = findViewById(R.id.lowerpremolar2R4chipped);
        lowerpremolar1R5chipped = findViewById(R.id.lowerpremolar1R5chipped);
        lowercanineR6chipped = findViewById(R.id.lowercanineR6chipped);
        lowerincisor2R7chipped = findViewById(R.id.lowerincisor2R7chipped);
        lowerincisor1R8chipped = findViewById(R.id.lowerincisor1R8chipped);
        lowerincisor1L9chipped = findViewById(R.id.lowerincisor1L9chipped);
        lowerincisor2L10chipped = findViewById(R.id.lowerincisor2L10chipped);
        lowercanineL11chipped = findViewById(R.id.lowercanineL11chipped);
        lowerpremolar1L12chipped = findViewById(R.id.lowerpremolar1L12chipped);
        lowerpremolar2l13chipped = findViewById(R.id.lowerpremolar2l13chipped);
        lowermolar1L14chipped = findViewById(R.id.lowermolar1L14chipped);
        lowermolar2L15chipped = findViewById(R.id.lowermolar2L15chipped);
        lowermolar3L16chipped = findViewById(R.id.lowermolar3L16chipped);


        // Decay
        lowermolar3R1decay = findViewById(R.id.lowermolar3R1decay);
        lowermolar2R2decay = findViewById(R.id.lowermolar2R2decay);
        lowermolar1R3decay = findViewById(R.id.lowermolar1R3decay);
        lowerpremolar2R4decay = findViewById(R.id.lowerpremolar2R4decay);
        lowerpremolar1R5decay = findViewById(R.id.lowerpremolar1R5decay);
        lowercanineR6decay = findViewById(R.id.lowercanineR6decay);
        lowerincisor2R7decay = findViewById(R.id.lowerincisor2R7decay);
        lowerincisor1R8decay = findViewById(R.id.lowerincisor1R8decay);
        lowerincisor1L9decay = findViewById(R.id.lowerincisor1L9decay);
        lowerincisor2L10decay = findViewById(R.id.lowerincisor2L10decay);
        lowercanineL11decay = findViewById(R.id.lowercanineL11decay);
        lowerpremolar1L12decay = findViewById(R.id.lowerpremolar1L12decay);
        lowerpremolar2l13decay = findViewById(R.id.lowerpremolar2l13decay);
        lowermolar1L14decay = findViewById(R.id.lowermolar1L14decay);
        lowermolar2L15decay = findViewById(R.id.lowermolar2L15decay);
        lowermolar3L16decay = findViewById(R.id.lowermolar3L16decay);


        // Loss
        lowermolar3R1loss = findViewById(R.id.lowermolar3R1loss);
        lowermolar2R2loss = findViewById(R.id.lowermolar2R2loss);
        lowermolar1R3loss = findViewById(R.id.lowermolar1R3loss);
        lowerpremolar2R4loss = findViewById(R.id.lowerpremolar2R4loss);
        lowerpremolar1R5loss = findViewById(R.id.lowerpremolar1R5loss);
        lowercanineR6loss = findViewById(R.id.lowercanineR6loss);
        lowerincisor2R7loss = findViewById(R.id.lowerincisor2R7loss);
        lowerincisor1R8loss = findViewById(R.id.lowerincisor1R8loss);
        lowerincisor1L9loss = findViewById(R.id.lowerincisor1L9loss);
        lowerincisor2L10loss = findViewById(R.id.lowerincisor2L10loss);
        lowercanineL11loss = findViewById(R.id.lowercanineL11loss);
        lowerpremolar1L12loss = findViewById(R.id.lowerpremolar1L12loss);
        lowerpremolar2l13loss = findViewById(R.id.lowerpremolar2l13loss);
        lowermolar1L14loss= findViewById(R.id.lowermolar1L14loss);
        lowermolar2L15loss = findViewById(R.id.lowermolar2L15loss);
        lowermolar3L16loss = findViewById(R.id.lowermolar3L16loss);


        // Neutral Teeth Intent Set On CLick Listeners!

        upmolar3L16.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3left16Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2L15.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2left15Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1L14.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1left14Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2L13.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2left13Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1L12.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1left12Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


        upcanineL11.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineleft11Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2L10.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2left10Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1L9.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1left9Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1R8.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1right8Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2R7.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2right7Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineR6.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineright6Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1R5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1right5Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2R4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2right4Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1R3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1right3Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2R2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2right2Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar3R1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3right1Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3R1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3right1Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2R2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2right2Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1R3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1right3Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2R4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2right4Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1R5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1right5Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineR6.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineright6Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2R7.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2right7Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1R8.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1right8Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1L9.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1left9Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2L10.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2left10Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineL11.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineleft11Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1L12.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1left12Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2l13.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2left13Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1L14.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1left14Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2L15.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2left15Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3L16.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3left16Activity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        // Healthy Teeth Intent Set On Click Listeners.

        upmolar3L16healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3left16healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2L15healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2left15healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


        upmolar1L14healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1left14healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2L13healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2left13healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1L12healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1left12healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineL11healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineleft11healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2L10healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2left10healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


        upincisor1L9healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1left9healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1R8healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1right8healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2R7healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2right7healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineR6healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineright6healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1R5healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1right5healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2R4healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2right4healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1R3healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1right3healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2R2healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2right2healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar3R1healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3right1healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3L16healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3left16healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2L15healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2left15healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1L14healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1left14healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2l13healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2left13healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1L12healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1left12healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineL11healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineleft11healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2L10healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2left10healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1L9healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1left9healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1R8healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1right8healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2R7healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2right7healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineR6healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineright6healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1R5healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1right5healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2R4healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2right4healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1R3healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1right3healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2R2healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2right2healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3R1healthy.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3right1healthyActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        // Decay Teeth.


        upmolar3L16decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3left16decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2L15decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2left15decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1L14decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1left14decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2L13decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2left13decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1L12decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1left12decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineL11decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineleft11decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2L10decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2left10decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1L9decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1left9decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1R8decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1right8decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2R7decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2right7decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineR6decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineright6decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1R5decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1right5decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2R4decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2right4decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1R3decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1right3decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2R2decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2right2decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar3R1decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3right1decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3L16decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3left16decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2L15decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2left15decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1L14decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1left14decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2l13decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2left13decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1L12decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1left12decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineL11decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineleft11decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2L10decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2left10decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1L9decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1left9decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1R8decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1right8decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2R7decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2right7decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineR6decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineright6decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1R5decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1right5decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2R4decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2right4decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1R3decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1right3decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2R2decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2right2decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3R1decay.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3right1decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        // Lost Teeth.

        upmolar3L16loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3left16lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2L15loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2left15lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1L14loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1left14lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2L13loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2left13lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1L12loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1left12lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineL11loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineleft11lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2L10loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2left10lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1L9loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1left9lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1R8loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1right8lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2R7loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2right7decayActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineR6loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineright6lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1R5loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1right5lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2R4loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2right4lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1R3loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1right3lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2R2loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2right2lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar3R1loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3right1lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3L16loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3left16lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2L15loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2left15lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1L14loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1left14lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2l13loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2left13lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1L12loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1left12lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineL11loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineleft11lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2L10loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2left10lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1L9loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1left9lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1R8loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1right8lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2R7loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2right7lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineR6loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineright6lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1R5loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1right5lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2R4loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2right4lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1R3loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1right3lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


        lowermolar2R2loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2right2lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3R1loss.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3right1lossActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        // Chipped Teeth.

        upmolar3L16chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3left16chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2L15chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2left15chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1L14chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1left14chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2L13chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2left13chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1L12chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1left12chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineL11chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineleft11chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2L10chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2left10chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1L9chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1left9chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor1R8chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor1right8chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upincisor2R7chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upincisor2right7chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upcanineR6chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upcanineright6chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar1R5chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar1right5chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        uppremolar2R4chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Uppremolar2right4chippedActvity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar1R3chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar1right3chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar2R2chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar2right2chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        upmolar3R1chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Upmolar3right1chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3L16chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3left16chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar2L15chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2left15chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1L14chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1left14chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2l13chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2left13chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1L12chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1left12chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineL11chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineleft11chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2L10chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2left10chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1L9chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1left9chippedActvitiy.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor1R8chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor1right8chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerincisor2R7chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerincisor2right7chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowercanineR6chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowercanineright6chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar1R5chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar1right5chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowerpremolar2R4chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowerpremolar2right4chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar1R3chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar1right3chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });


        lowermolar2R2chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar2right2chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        lowermolar3R1chipped.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, Lowermolar3right1chippedActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));

            }
        });

        // Legend....

        LinearLayout dim_layout = (LinearLayout) findViewById(R.id.dim_layout);

        legendBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                dim_layout.setVisibility(View.VISIBLE);
            }
        });

        ImageView legend = (ImageView)  findViewById(R.id.legend);

        legend.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                dim_layout.setVisibility(View.GONE);
            }
        });





        // Printing out for logic!

            ArrayList<String> classValues = new ArrayList<>();
            classValues.add(labelList.get((int) class_value0));
            classValues.add(labelList.get((int) class_value1));
            classValues.add(labelList.get((int) class_value2));
            classValues.add(labelList.get((int) class_value3));
            classValues.add(labelList.get((int) class_value4));
            classValues.add(labelList.get((int) class_value5));
            classValues.add(labelList.get((int) class_value6));
            classValues.add(labelList.get((int) class_value7));
            classValues.add(labelList.get((int) class_value8));
            classValues.add(labelList.get((int) class_value9));
            classValues.add(labelList.get((int) class_value10));
            classValues.add(labelList.get((int) class_value11));
            classValues.add(labelList.get((int) class_value12));
            classValues.add(labelList.get((int) class_value13));
            classValues.add(labelList.get((int) class_value14));
            classValues.add(labelList.get((int) class_value15));
            classValues.add(labelList.get((int) class_value16));
            classValues.add(labelList.get((int) class_value17));
            classValues.add(labelList.get((int) class_value18));
            classValues.add(labelList.get((int) class_value19));
            classValues.add(labelList.get((int) class_value20));
            classValues.add(labelList.get((int) class_value21));
            classValues.add(labelList.get((int) class_value22));
            classValues.add(labelList.get((int) class_value23));
            classValues.add(labelList.get((int) class_value24));
            classValues.add(labelList.get((int) class_value25));
            classValues.add(labelList.get((int) class_value26));
            classValues.add(labelList.get((int) class_value27));
            classValues.add(labelList.get((int) class_value28));
            classValues.add(labelList.get((int) class_value29));
            classValues.add(labelList.get((int) class_value30));
            classValues.add(labelList.get((int) class_value31));
            classValues.add(labelList.get((int) class_value32));
            classValues.add(labelList.get((int) class_value33));
            classValues.add(labelList.get((int) class_value34));
            classValues.add(labelList.get((int) class_value35));
            classValues.add(labelList.get((int) class_value36));
            classValues.add(labelList.get((int) class_value37));
            classValues.add(labelList.get((int) class_value38));
            classValues.add(labelList.get((int) class_value39));

        ArrayList<Float> scoreValues = new ArrayList<>();
        scoreValues.add(Float.valueOf(score_value0));
        scoreValues.add(Float.valueOf(score_value1));
        scoreValues.add(Float.valueOf(score_value2));
        scoreValues.add(Float.valueOf(score_value3));
        scoreValues.add(Float.valueOf(score_value4));
        scoreValues.add(Float.valueOf(score_value5));
        scoreValues.add(Float.valueOf(score_value6));
        scoreValues.add(Float.valueOf(score_value7));
        scoreValues.add(Float.valueOf(score_value8));
        scoreValues.add(Float.valueOf(score_value9));
        scoreValues.add(Float.valueOf(score_value10));
        scoreValues.add(Float.valueOf(score_value11));
        scoreValues.add(Float.valueOf(score_value12));
        scoreValues.add(Float.valueOf(score_value13));
        scoreValues.add(Float.valueOf(score_value14));
        scoreValues.add(Float.valueOf(score_value15));
        scoreValues.add(Float.valueOf(score_value16));
        scoreValues.add(Float.valueOf(score_value17));
        scoreValues.add(Float.valueOf(score_value18));
        scoreValues.add(Float.valueOf(score_value19));
        scoreValues.add(Float.valueOf(score_value20));
        scoreValues.add(Float.valueOf(score_value21));
        scoreValues.add(Float.valueOf(score_value22));
        scoreValues.add(Float.valueOf(score_value23));
        scoreValues.add(Float.valueOf(score_value24));
        scoreValues.add(Float.valueOf(score_value25));
        scoreValues.add(Float.valueOf(score_value26));
        scoreValues.add(Float.valueOf(score_value27));
        scoreValues.add(Float.valueOf(score_value28));
        scoreValues.add(Float.valueOf(score_value29));
        scoreValues.add(Float.valueOf(score_value30));
        scoreValues.add(Float.valueOf(score_value31));
        scoreValues.add(Float.valueOf(score_value32));
        scoreValues.add(Float.valueOf(score_value33));
        scoreValues.add(Float.valueOf(score_value34));
        scoreValues.add(Float.valueOf(score_value35));
        scoreValues.add(Float.valueOf(score_value36));
        scoreValues.add(Float.valueOf(score_value37));
        scoreValues.add(Float.valueOf(score_value38));
        scoreValues.add(Float.valueOf(score_value39));



        for(int i=0; i < 40; i++) {
            if (scoreValues.get(i) > 0.3 || scoreValues.get(i) > 0.4 || scoreValues.get(i) > 0.5 ) {


                System.out.println(classValues);

                analysisBtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        Intent intent = new Intent(StoragePredictionActivity.this, AnalysisActivity.class);
                        intent.putExtra(LABEL_LIST, classValues);
                        startActivity(intent);
                    }
                });
//
                treatmentBtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        Intent intent = new Intent(StoragePredictionActivity.this, TreatmentActivity.class);
                        intent.putExtra(LABEL_LIST, classValues);
                        startActivity(intent);
                    }
                });

                augmentBtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        Intent intent = new Intent(StoragePredictionActivity.this, UnityHandlerActivity.class);
                        startActivity(intent);
                    }
                });

                switchBtn.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {


                        // I just added more in the array to match the top 30 detected object.

                        image_v.setVisibility(View.GONE);
                        numbering.setVisibility(View.VISIBLE);
                        numbering2.setVisibility(View.VISIBLE);

                        if (classValues.toString().contains("u16")) {

                            if (classValues.contains("u16healthy")) {
                                upmolar3L16healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u16decay")) {
                                upmolar3L16decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u16chipped")) {
                                upmolar3L16chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u16loss")) {
                                upmolar3L16loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar3L16.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upmolar3L16.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("u15")) {

                            if (classValues.contains("u15healthy")) {
                                upmolar2L15healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u15decay")) {
                                upmolar2L15decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u15chipped")) {
                                upmolar2L15chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u15loss")) {
                                upmolar2L15loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar2L15.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upmolar2L15.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u14")) {
                            if (classValues.contains("u14healthy")) {
                                upmolar1L14healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u14decay")) {
                                upmolar1L14decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u14chipped")) {
                                upmolar1L14chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u14loss")) {
                                upmolar1L14loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar1L14.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upmolar1L14.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u13")) {

                            if (classValues.contains("u13healthy")) {
                                uppremolar2L13healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u13decay")) {
                                uppremolar2L13decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u13chipped")) {
                                uppremolar2L13chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u13loss")) {
                                uppremolar2L13loss.setVisibility(View.VISIBLE);
                            } else {
                                uppremolar2L13.setVisibility(View.VISIBLE);
                            }

                        } else {
                            uppremolar2L13.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u12")) {

                            if (classValues.contains("u12healthy")) {
                                uppremolar1L12healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u12decay")) {
                                uppremolar1L12decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u12chipped")) {
                                uppremolar1L12chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u12loss")) {
                                uppremolar1L12loss.setVisibility(View.VISIBLE);
                            } else {
                                uppremolar1L12.setVisibility(View.VISIBLE);
                            }
                        } else {
                            uppremolar1L12.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u11")) {

                            if (classValues.contains("u11healthy")) {
                                upcanineL11healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u11decay")) {
                                upcanineL11decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u11chipped")) {
                                upcanineL11chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u11loss")) {
                                upcanineL11loss.setVisibility(View.VISIBLE);
                            } else {
                                upcanineL11.setVisibility(View.VISIBLE);
                            }

                        } else {
                            upcanineL11.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("u10")) {

                            if (classValues.contains("u10healthy")) {
                                upincisor2L10.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u10decay")) {
                                upincisor2L10decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u10chipped")) {
                                upincisor2L10chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u10loss")) {
                                upincisor2L10loss.setVisibility(View.VISIBLE);
                            } else {
                                upincisor2L10.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upincisor2L10.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("u9")) {

                            if (classValues.contains("u9healthy")) {
                                upincisor1L9healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u9decay")) {
                                upincisor1L9decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u9chipped")) {
                                upincisor1L9chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u9loss")) {
                                upincisor1L9loss.setVisibility(View.VISIBLE);
                            } else {
                                upincisor1L9.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upincisor1L9.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u8")) {
                            if (classValues.contains("u8healthy")) {
                                upincisor1R8healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u8decay")) {
                                upincisor1R8decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u8chipped")) {
                                upincisor1R8chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u8loss")) {
                                upincisor1R8loss.setVisibility(View.VISIBLE);

                            } else {
                                upincisor1R8.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upincisor1R8.setVisibility(View.VISIBLE);
                        }


                        if (classValues.toString().contains("u7")) {

                            if (classValues.contains("u7healthy")) {
                                upincisor2R7healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u7decay")) {
                                upincisor2R7decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u7chipped")) {
                                upincisor2R7chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u7loss")) {
                                upincisor2R7loss.setVisibility(View.VISIBLE);
                            } else {
                                upincisor2R7.setVisibility(View.VISIBLE);
                            }

                        } else {
                            upincisor2R7.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u6")) {

                            if (classValues.contains("u6healthy")) {
                                upcanineR6healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u6decay")) {
                                upcanineR6decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u6chipped")) {
                                upcanineR6chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u6loss")) {
                                upcanineR6loss.setVisibility(View.VISIBLE);
                            } else {
                                upcanineR6.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upcanineR6.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u5")) {

                            if (classValues.contains("u5healthy")) {
                                uppremolar1R5healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u5decay")) {
                                uppremolar1R5decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u5chipped")) {
                                uppremolar1R5chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u5loss")) {
                                uppremolar1R5loss.setVisibility(View.VISIBLE);
                            } else {
                                uppremolar1R5.setVisibility(View.VISIBLE);
                            }

                        } else {
                            uppremolar1R5.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u4")) {

                            if (classValues.contains("u4healthy")) {
                                uppremolar2R4healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u4decay")) {
                                uppremolar2R4decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u4chipped")) {
                                uppremolar2R4chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u4loss")) {
                                uppremolar2R4loss.setVisibility(View.VISIBLE);
                            } else {
                                uppremolar2R4.setVisibility(View.VISIBLE);
                            }
                        } else {
                            uppremolar2R4.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("u3")) {

                            if (classValues.contains("u3healthy")) {
                                upmolar1R3healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u3decay")) {
                                upmolar1R3decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u3chipped")) {
                                upmolar1R3chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u3loss")) {
                                upmolar1R3loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar1R3.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upmolar1R3.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u2")) {
                            if (classValues.contains("u2healthy")) {
                                upmolar2R2healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u2decay")) {
                                upmolar2R2decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u2chipped")) {
                                upmolar2R2chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u2loss")) {
                                upmolar2R2loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar2R2.setVisibility(View.VISIBLE);
                            }
                        } else {
                            upmolar2R2.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("u1")) {

                            if (classValues.contains("u1healthy")) {
                                upmolar3R1healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u1decay")) {
                                upmolar3R1decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u1chipped")) {
                                upmolar3R1chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("u1loss")) {
                                upmolar3R1loss.setVisibility(View.VISIBLE);
                            } else {
                                upmolar3R1.setVisibility(View.VISIBLE);
                            }

                        } else {
                            upmolar3R1.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i16")) {

                            if (classValues.contains("i16healthy")) {
                                lowermolar3L16healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i16decay")) {
                                lowermolar3L16decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i16chipped")) {
                                lowermolar3L16chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i16loss")) {
                                lowermolar3L16loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar3L16.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowermolar3L16.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i15")) {

                            if (classValues.contains("i15healthy")) {
                                lowermolar2L15healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i15decay")) {
                                lowermolar2L15decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i15chipped")) {
                                lowermolar2L15chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i15loss")) {
                                lowermolar2L15loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar2L15.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowermolar2L15.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("i14")) {

                            if (classValues.contains("i14healthy")) {
                                lowermolar1L14healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i14decay")) {
                                lowermolar1L14decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i14chipped")) {
                                lowermolar1L14chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i14loss")) {
                                lowermolar1L14loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar1L14.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowermolar1L14.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("i13")) {

                            if (classValues.contains("i13healthy")) {
                                lowerpremolar2l13healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i13decay")) {
                                lowerpremolar2l13decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i13chipped")) {
                                lowerpremolar2l13chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i13loss")) {
                                lowerpremolar2l13loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerpremolar2l13.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerpremolar2l13.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i12")) {
                            if (classValues.contains("i12healthy")) {
                                lowerpremolar1L12healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i12decay")) {
                                lowerpremolar1L12decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i12chipped")) {
                                lowerpremolar1L12chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i12loss")) {
                                lowerpremolar1L12loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerpremolar1L12.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerpremolar1L12.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i11")) {

                            if (classValues.contains("i11healthy")) {
                                lowercanineL11healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i11decay")) {
                                lowercanineL11decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i11chipped")) {
                                lowercanineL11chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i11loss")) {
                                lowercanineL11loss.setVisibility(View.VISIBLE);
                            } else {
                                lowercanineL11.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowercanineL11.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i10")) {

                            if (classValues.contains("i10healthy")) {
                                lowerincisor2L10healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i10decay")) {
                                lowerincisor2L10decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i10chipped")) {
                                lowerincisor2L10chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i10loss")) {
                                lowerincisor2L10loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerincisor2L10.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerincisor2L10.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i9")) {

                            if (classValues.contains("i9healthy")) {
                                lowerincisor1L9healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i9decay")) {
                                lowerincisor1L9decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i9chipped")) {
                                lowerincisor1L9chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i9loss")) {
                                lowerincisor1L9loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerincisor1L9.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowerincisor1L9.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i8")) {

                            if (classValues.contains("i8healthy")) {
                                lowerincisor1R8healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i8decay")) {
                                lowerincisor1R8decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i8chipped")) {
                                lowerincisor1R8chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i8loss")) {
                                lowerincisor1R8loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerincisor1R8.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerincisor1R8.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i7")) {

                            if (classValues.contains("i7healthy")) {
                                lowerincisor2R7healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i7decay")) {
                                lowerincisor2R7decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i7chipped")) {
                                lowerincisor2R7chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i7loss")) {
                                lowerincisor2R7loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerincisor2R7.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowerincisor2R7.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("i6")) {

                            if (classValues.contains("i6healthy")) {
                                lowercanineR6healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i6decay")) {
                                lowercanineR6decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i6chipped")) {
                                lowercanineR6chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i6loss")) {
                                lowercanineR6loss.setVisibility(View.VISIBLE);
                            } else {
                                lowercanineR6.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowercanineR6.setVisibility(View.VISIBLE);
                        }
                        if (classValues.toString().contains("i5")) {

                            if (classValues.contains("i5healthy")) {
                                lowerpremolar1R5healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i5decay")) {
                                lowerpremolar1R5decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i5chipped")) {
                                lowerpremolar1R5chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i5loss")) {
                                lowerpremolar1R5loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerpremolar1R5.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerpremolar1R5.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i4")) {
                            if (classValues.contains("i4healthy")) {
                                lowerpremolar2R4healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i4decay")) {
                                lowerpremolar2R4decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i4chipped")) {
                                lowerpremolar2R4chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i4loss")) {
                                lowerpremolar2R4loss.setVisibility(View.VISIBLE);
                            } else {
                                lowerpremolar2R4.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowerpremolar2R4.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i3")) {

                            if (classValues.contains("i3healthy")) {
                                lowermolar1R3healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i3decay")) {
                                lowermolar1R3decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i3chipped")) {
                                lowermolar1R3chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i3loss")) {
                                lowermolar1R3loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar1R3.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowermolar1R3.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i2")) {

                            if (classValues.contains("i2healthy")) {
                                lowermolar2R2healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i2decay")) {
                                lowermolar2R2decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i2chipped")) {
                                lowermolar2R2chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i2loss")) {
                                lowermolar2R2loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar2R2.setVisibility(View.VISIBLE);
                            }
                        } else {
                            lowermolar2R2.setVisibility(View.VISIBLE);
                        }

                        if (classValues.toString().contains("i1")) {

                            if (classValues.contains("i1healthy")) {
                                lowermolar3R1healthy.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i1decay")) {
                                lowermolar3R1decay.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i1chipped")) {
                                lowermolar3R1chipped.setVisibility(View.VISIBLE);
                            } else if (classValues.contains("i1loss")) {
                                lowermolar3R1loss.setVisibility(View.VISIBLE);
                            } else {
                                lowermolar3R1.setVisibility(View.VISIBLE);
                            }

                        } else {
                            lowermolar3R1.setVisibility(View.VISIBLE);
                        }

                    }
                });

                switchBack.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {

                        image_v.setVisibility(View.VISIBLE);
                        numbering.setVisibility(View.GONE);
                        numbering2.setVisibility(View.GONE);
                        upmolar3L16.setVisibility(View.GONE);
                        upmolar2L15.setVisibility(View.GONE);
                        upmolar1L14.setVisibility(View.GONE);
                        uppremolar1L12.setVisibility(View.GONE);
                        uppremolar2L13.setVisibility(View.GONE);
                        upcanineL11.setVisibility(View.GONE);
                        upincisor2L10.setVisibility(View.GONE);
                        upincisor1L9.setVisibility(View.GONE);
                        upincisor1R8.setVisibility(View.GONE);
                        upincisor2R7.setVisibility(View.GONE);
                        upcanineR6.setVisibility(View.GONE);
                        uppremolar1R5.setVisibility(View.GONE);
                        uppremolar2R4.setVisibility(View.GONE);
                        upmolar1R3.setVisibility(View.GONE);
                        upmolar2R2.setVisibility(View.GONE);
                        upmolar3R1.setVisibility(View.GONE);
                        lowermolar3R1.setVisibility(View.GONE);
                        lowermolar2R2.setVisibility(View.GONE);
                        lowermolar1R3.setVisibility(View.GONE);
                        lowerpremolar2R4.setVisibility(View.GONE);
                        lowerpremolar1R5.setVisibility(View.GONE);
                        lowercanineR6.setVisibility(View.GONE);
                        lowerincisor2R7.setVisibility(View.GONE);
                        lowerincisor1R8.setVisibility(View.GONE);
                        lowerincisor1L9.setVisibility(View.GONE);
                        lowerincisor2L10.setVisibility(View.GONE);
                        lowercanineL11.setVisibility(View.GONE);
                        lowerpremolar1L12.setVisibility(View.GONE);
                        lowerpremolar2l13.setVisibility(View.GONE);
                        lowermolar1L14.setVisibility(View.GONE);
                        lowermolar2L15.setVisibility(View.GONE);
                        lowermolar3L16.setVisibility(View.GONE);
                        upmolar3L16healthy.setVisibility(View.GONE);
                        upmolar2L15healthy.setVisibility(View.GONE);
                        upmolar1L14healthy.setVisibility(View.GONE);
                        uppremolar1L12healthy.setVisibility(View.GONE);
                        uppremolar2L13healthy.setVisibility(View.GONE);
                        upcanineL11healthy.setVisibility(View.GONE);
                        upincisor2L10healthy.setVisibility(View.GONE);
                        upincisor1L9healthy.setVisibility(View.GONE);
                        upincisor1R8healthy.setVisibility(View.GONE);
                        upincisor2R7healthy.setVisibility(View.GONE);
                        upcanineR6healthy.setVisibility(View.GONE);
                        uppremolar1R5healthy.setVisibility(View.GONE);
                        uppremolar2R4healthy.setVisibility(View.GONE);
                        upmolar1R3healthy.setVisibility(View.GONE);
                        upmolar2R2healthy.setVisibility(View.GONE);
                        upmolar3R1healthy.setVisibility(View.GONE);
                        lowermolar3R1healthy.setVisibility(View.GONE);
                        lowermolar2R2healthy.setVisibility(View.GONE);
                        lowermolar1R3healthy.setVisibility(View.GONE);
                        lowerpremolar2R4healthy.setVisibility(View.GONE);
                        lowerpremolar1R5healthy.setVisibility(View.GONE);
                        lowercanineR6healthy.setVisibility(View.GONE);
                        lowerincisor2R7healthy.setVisibility(View.GONE);
                        lowerincisor1R8healthy.setVisibility(View.GONE);
                        lowerincisor1L9healthy.setVisibility(View.GONE);
                        lowerincisor2L10healthy.setVisibility(View.GONE);
                        lowercanineL11healthy.setVisibility(View.GONE);
                        lowerpremolar1L12healthy.setVisibility(View.GONE);
                        lowerpremolar2l13healthy.setVisibility(View.GONE);
                        lowermolar1L14healthy.setVisibility(View.GONE);
                        lowermolar2L15healthy.setVisibility(View.GONE);
                        lowermolar3L16healthy.setVisibility(View.GONE);
                        upmolar3L16loss.setVisibility(View.GONE);
                        upmolar2L15loss.setVisibility(View.GONE);
                        upmolar1L14loss.setVisibility(View.GONE);
                        uppremolar1L12loss.setVisibility(View.GONE);
                        uppremolar2L13loss.setVisibility(View.GONE);
                        upcanineL11loss.setVisibility(View.GONE);
                        upincisor2L10loss.setVisibility(View.GONE);
                        upincisor1L9loss.setVisibility(View.GONE);
                        upincisor1R8loss.setVisibility(View.GONE);
                        upincisor2R7loss.setVisibility(View.GONE);
                        upcanineR6loss.setVisibility(View.GONE);
                        uppremolar1R5loss.setVisibility(View.GONE);
                        uppremolar2R4loss.setVisibility(View.GONE);
                        upmolar1R3loss.setVisibility(View.GONE);
                        upmolar2R2loss.setVisibility(View.GONE);
                        upmolar3R1loss.setVisibility(View.GONE);
                        lowermolar3R1loss.setVisibility(View.GONE);
                        lowermolar2R2loss.setVisibility(View.GONE);
                        lowermolar1R3loss.setVisibility(View.GONE);
                        lowerpremolar2R4loss.setVisibility(View.GONE);
                        lowerpremolar1R5loss.setVisibility(View.GONE);
                        lowercanineR6loss.setVisibility(View.GONE);
                        lowerincisor2R7loss.setVisibility(View.GONE);
                        lowerincisor1R8loss.setVisibility(View.GONE);
                        lowerincisor1L9loss.setVisibility(View.GONE);
                        lowerincisor2L10loss.setVisibility(View.GONE);
                        lowercanineL11loss.setVisibility(View.GONE);
                        lowerpremolar1L12loss.setVisibility(View.GONE);
                        lowerpremolar2l13loss.setVisibility(View.GONE);
                        lowermolar1L14loss.setVisibility(View.GONE);
                        lowermolar2L15loss.setVisibility(View.GONE);
                        lowermolar3L16loss.setVisibility(View.GONE);
                        upmolar3L16chipped.setVisibility(View.GONE);
                        upmolar2L15chipped.setVisibility(View.GONE);
                        upmolar1L14chipped.setVisibility(View.GONE);
                        uppremolar1L12chipped.setVisibility(View.GONE);
                        uppremolar2L13chipped.setVisibility(View.GONE);
                        upcanineL11chipped.setVisibility(View.GONE);
                        upincisor2L10chipped.setVisibility(View.GONE);
                        upincisor1L9chipped.setVisibility(View.GONE);
                        upincisor1R8chipped.setVisibility(View.GONE);
                        upincisor2R7chipped.setVisibility(View.GONE);
                        upcanineR6chipped.setVisibility(View.GONE);
                        uppremolar1R5chipped.setVisibility(View.GONE);
                        uppremolar2R4chipped.setVisibility(View.GONE);
                        upmolar1R3chipped.setVisibility(View.GONE);
                        upmolar2R2chipped.setVisibility(View.GONE);
                        upmolar3R1chipped.setVisibility(View.GONE);
                        lowermolar3R1chipped.setVisibility(View.GONE);
                        lowermolar2R2chipped.setVisibility(View.GONE);
                        lowermolar1R3chipped.setVisibility(View.GONE);
                        lowerpremolar2R4chipped.setVisibility(View.GONE);
                        lowerpremolar1R5chipped.setVisibility(View.GONE);
                        lowercanineR6chipped.setVisibility(View.GONE);
                        lowerincisor2R7chipped.setVisibility(View.GONE);
                        lowerincisor1R8chipped.setVisibility(View.GONE);
                        lowerincisor1L9chipped.setVisibility(View.GONE);
                        lowerincisor2L10chipped.setVisibility(View.GONE);
                        lowercanineL11chipped.setVisibility(View.GONE);
                        lowerpremolar1L12chipped.setVisibility(View.GONE);
                        lowerpremolar2l13chipped.setVisibility(View.GONE);
                        lowermolar1L14chipped.setVisibility(View.GONE);
                        lowermolar2L15chipped.setVisibility(View.GONE);
                        lowermolar3L16chipped.setVisibility(View.GONE);
                        upmolar3L16decay.setVisibility(View.GONE);
                        upmolar2L15decay.setVisibility(View.GONE);
                        upmolar1L14decay.setVisibility(View.GONE);
                        uppremolar1L12decay.setVisibility(View.GONE);
                        uppremolar2L13decay.setVisibility(View.GONE);
                        upcanineL11decay.setVisibility(View.GONE);
                        upincisor2L10decay.setVisibility(View.GONE);
                        upincisor1L9decay.setVisibility(View.GONE);
                        upincisor1R8decay.setVisibility(View.GONE);
                        upincisor2R7decay.setVisibility(View.GONE);
                        upcanineR6decay.setVisibility(View.GONE);
                        uppremolar1R5decay.setVisibility(View.GONE);
                        uppremolar2R4decay.setVisibility(View.GONE);
                        upmolar1R3decay.setVisibility(View.GONE);
                        upmolar2R2decay.setVisibility(View.GONE);
                        upmolar3R1decay.setVisibility(View.GONE);
                        lowermolar3R1decay.setVisibility(View.GONE);
                        lowermolar2R2decay.setVisibility(View.GONE);
                        lowermolar1R3decay.setVisibility(View.GONE);
                        lowerpremolar2R4decay.setVisibility(View.GONE);
                        lowerpremolar1R5decay.setVisibility(View.GONE);
                        lowercanineR6decay.setVisibility(View.GONE);
                        lowerincisor2R7decay.setVisibility(View.GONE);
                        lowerincisor1R8decay.setVisibility(View.GONE);
                        lowerincisor1L9decay.setVisibility(View.GONE);
                        lowerincisor2L10decay.setVisibility(View.GONE);
                        lowercanineL11decay.setVisibility(View.GONE);
                        lowerpremolar1L12decay.setVisibility(View.GONE);
                        lowerpremolar2l13decay.setVisibility(View.GONE);
                        lowermolar1L14decay.setVisibility(View.GONE);
                        lowermolar2L15decay.setVisibility(View.GONE);
                        lowermolar3L16decay.setVisibility(View.GONE);
                    }
                });


//                if(classValues.contains("incisor")){
//                    sample.setText("hello"); // workssssssss
//
//                }
            }
        }



//            ArrayList<String> classValues = new ArrayList<>();
////            classValues.add(labelList.get((int) class_value));
//            classValues.add(labelList.get((Integer) Array.get(Array.get(Object_class,0),0)));
//            classValues.add(labelList.get((Integer) Array.get(Array.get(Object_class,0),0)));
//            classValues.add(labelList.get((Integer) Array.get(Array.get(Object_class,0),0)));






// Dito yung bracket dati ng first for loop!

        // select device and run

        // before returning rotate back by -90 degree
        // do the same here (b)

//        Mat b=rotated_mat_image.t();
//        Core.flip(b,mat_image,0);
//        b.release();
//        // now for second change go to CameraBrideViewBase
        return mat_image;
    }

    private ByteBuffer convertBitmapToByteBuffer(Bitmap bitmap) {
        ByteBuffer byteBuffer;
        // some model input should be quant=0  for some quant=1
        // for this quant=0
        // change quant=1
        // as we are scaling image from 0-255 to 0-1
        int quant=1;
        int size_images=INPUT_SIZE;
        if(quant==0){
            byteBuffer=ByteBuffer.allocateDirect(1*size_images*size_images*3);
        }
        else {
            byteBuffer=ByteBuffer.allocateDirect(4*1*size_images*size_images*3);
        }
        byteBuffer.order(ByteOrder.nativeOrder());
        int[] intValues=new int[size_images*size_images];
        bitmap.getPixels(intValues,0,bitmap.getWidth(),0,0,bitmap.getWidth(),bitmap.getHeight());
        int pixel=0;

        // some error
        //now run
        for (int i=0;i<size_images;++i){
            for (int j=0;j<size_images;++j){
                final  int val=intValues[pixel++];
                if(quant==0){
                    byteBuffer.put((byte) ((val>>16)&0xFF));
                    byteBuffer.put((byte) ((val>>8)&0xFF));
                    byteBuffer.put((byte) (val&0xFF));
                }
                else {
                    // paste this
                    byteBuffer.putFloat((((val >> 16) & 0xFF))/255.0f);
                    byteBuffer.putFloat((((val >> 8) & 0xFF))/255.0f);
                    byteBuffer.putFloat((((val) & 0xFF))/255.0f);
                }
            }
        }
        return byteBuffer;
    }




    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_storage_prediction);

        select_image=findViewById(R.id.select_image);
        camera_option=findViewById(R.id.camera_option);
        image_v=findViewById(R.id.image_v);


        camera_option.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(StoragePredictionActivity.this, PredictionActivity.class)
                        .addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK | Intent.FLAG_ACTIVITY_CLEAR_TOP));
            }
        });


        // load_model
        // Copy and paste exact ode from OnCreate of CameraActivity

        try{

            // Now replace model name, label name, and input size
            // We trained model on input size = 320
            // input size is 300 for this model
            //objectDetectorClass=new objectDetectorClass(getAssets(),"custom_model.tflite","custom_label.txt",320);
            objectDetect(getAssets(),"custom_custom_custom_custom.tflite","custom_custom_label.txt",320);
            Log.d("MainActivity","Model is successfully loaded");
        }
        catch (IOException e){
            Log.d("MainActivity","Getting some error");
            e.printStackTrace();
        }

        select_image.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // When the select_image button is clicked
                // Choose Image
                image_chooser();
            }
        });

    }
    private void image_chooser() {
        // This function will choose image
        // Create a new intent to navigate to gallery

        Intent i = new Intent();
        // Set type of intent as image
        i.setType("image/*");
        i.setAction(Intent.ACTION_GET_CONTENT);

        // Now startActivityForResult to select image
        // Now create a new int SELECT_PICTURE
        // SELECT_IMAGE is use when a picture is selected it will return uri and 200
        // 200 means successfully selected picture
        startActivityForResult(Intent.createChooser(i, "Select Picture"), SELECT_PICTURE);

    }

    // Create a function onActivityResult to get uri
    public void onActivityResult(int requestCode, int resultCode, Intent data){
        super.onActivityResult(requestCode, resultCode, data);
        if(resultCode==RESULT_OK){
            if(requestCode==SELECT_PICTURE){


                scan_png = findViewById(R.id.scan_png);


                scan_png.setVisibility(View.GONE);
                select_image.setVisibility(View.GONE);
                camera_option.setVisibility(View.GONE);


                // Successfully selected picture
                Uri selectedImageUri=data.getData();
                if(selectedImageUri !=null){
                    // Check if it is empty or not
                    // If you want you can print uri
                    Log.d("StoragePrediction", "Output_uri: "+selectedImageUri);
                    // Now read uri in bitmap format
                    Bitmap bitmap=null;
                    try{
                        bitmap= MediaStore.Images.Media.getBitmap(this.getContentResolver(), selectedImageUri);
                    }
                    catch (IOException e){
                        e.printStackTrace();
                    }
                    // Now convert bitmap image to Mat image
                    // CV_8UC4: RGBA image
                    // CV_8UC1: Grayscale image

                    Mat selected_image= new Mat(bitmap.getHeight(), bitmap.getWidth(), CvType.CV_8UC4);
                    Utils.bitmapToMat(bitmap, selected_image);

                    // Now we have to some change in objectDetection Class
                    // Now pass selected_image to recognizePhoto
                    // It will return selected_image with box and name drawn of image
                    try {
                        objectDetect(getAssets(),"custom_custom_custom_custom.tflite","custom_custom_label.txt",320);
                        selected_image=recognizePhoto(selected_image);

                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                    // Now we will convert this mat image to bitmap

                    Bitmap bitmap1=null;
                    bitmap1=Bitmap.createBitmap(selected_image.cols(),selected_image.rows(),Bitmap.Config.ARGB_8888);
                    //                  input        output
                    Utils.matToBitmap(selected_image,bitmap1);
                    // Now set bitmap to imageView
                    image_v.setImageBitmap(bitmap1);
                    // Before running one change
                    // Now select device and run
                    // D/MainActivity: Model is successfully loaded
                    // Output_uri: content://com.android.providers.media.documents/document/image%34391705
                    // Hopefully everything is working


                    // Try getting classes name in custom_label.txt !!!!

//                    TextView detected_classes = (TextView) findViewById(R.id.detected_classes);
//                    try {
//                        labelList = loadLabelList(getAssets(), "custom_label.txt");
//                    } catch (IOException e) {
//                        e.printStackTrace();
//                    }
//                    detected_classes.setText(labelList.toString());



//                    }


                }
            }
        }
    }
}