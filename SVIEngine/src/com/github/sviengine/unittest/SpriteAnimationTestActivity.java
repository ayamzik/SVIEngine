package com.github.sviengine.unittest;

import android.content.res.Configuration;
import android.os.Bundle;

public class SpriteAnimationTestActivity extends UnitTestBaseActivity{
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
	}
	
	@Override
	public void onConfigurationChanged(Configuration newConfig) {
		// TODO Auto-generated method stub
		super.onConfigurationChanged(newConfig);
	}

	@Override
	protected void onPause() {
		// TODO Auto-generated method stub
		super.onPause();
	}

	@Override
	protected void onResume() {
		// TODO Auto-generated method stub
		super.onResume();
	}

	
	@Override
	protected void onDestroy() {
		mOriginWindow.release();
		mOriginWindow = null;
		super.onDestroy();
	}
	
	
	@Override
	public boolean createWindow() {
		// TODO Auto-generated method stub
		mWindow = new SpriteAnimationTestWindow(this);
		mOriginWindow = (SpriteAnimationTestWindow)mWindow;
		if( mWindow == null )
			return false;
		
		return true;
	}
	
	SpriteAnimationTestWindow 					mOriginWindow = null;
}
