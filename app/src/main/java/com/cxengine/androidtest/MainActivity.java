package com.cxengine.androidtest;

import android.os.Bundle;
import android.util.Log;

import com.xginx.cxengine.EngineActivity;

public class MainActivity extends EngineActivity {

    static {
        System.loadLibrary("game");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }

    @Override
    protected void onDestroy() {
        Log.e("MainActivity","onDestroy");
        super.onDestroy();
    }
}
