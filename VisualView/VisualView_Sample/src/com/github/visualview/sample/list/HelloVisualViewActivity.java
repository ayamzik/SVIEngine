/*
 * Copyright (C) 2013 SVV.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package com.github.visualview.sample.list;

import android.app.Activity;
import android.os.Bundle;

import com.github.visualview.SVColor;
import com.github.visualview.SVGLSurface;
import com.github.visualview.SVSlide;
import com.github.visualview.animation.SVAnimation;
import com.github.visualview.animation.SVBasicAnimation;

public class HelloVisualViewActivity extends Activity{

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		
		
		mSurface = new SVGLSurface(this);
		/*
		 * if user want use their own surface, can create this way.
		 * 	mSurface = new SVGLSurface(context, translucent, depth, stencil)
		 * 
		 */
		setContentView(mSurface);
		
		/*
		 * SVSlide(Parent slide, Start X Point, Start Y Point, Width, Height, Slide's Color)
		 */
		mSlide = new SVSlide(null, 100.0f, 100.0f, 500.0f, 500.0f, new SVColor(1.0f, 0.0f, 0.0f, 1.0f));
		
		mSlide.setProjectionType(SVSlide.PROJECTION_PERSPECTIVE);
		mSurface.addSlide(mSlide);
		
		SVBasicAnimation keyZPositionAni = new SVBasicAnimation(SVAnimation.Z_POSITION, 0.0f, 100.0f);
		keyZPositionAni.setDuration(3000);
		
		mSlide.startAnimation(keyZPositionAni);
		
		mSlide.setZPosition(100.0f, 3000);
		
	}
	
	

	@Override
	protected void onDestroy() {
		// TODO Auto-generated method stub
		super.onDestroy();
	}
	@Override
	protected void onPause() {
		// TODO Auto-generated method stub
		super.onPause();
	}
	@Override
	protected void onResume() {
		mSurface.onResume();
		super.onResume();
	}



	SVGLSurface mSurface = null;
	SVSlide mSlide = null;
	
}
