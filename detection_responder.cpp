/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "detection_responder.h"


// This dummy implementation writes person and no person scores to the error
// console. Real applications will want to take some custom action instead, and
// should implement their own versions of this function.

//int size_of_array = 8;
//int pipe_close_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int pipe_inside_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int non_pipe_close_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int non_pipe_inside_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int camera_blocked_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int nothing_status[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//int curr_prediction_status[6] = {0, 0, 0, 0, 0, 0};
//
//int prediction_status[48] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//// prediction status class 8*pipe_close, 8*pipe inside, 8*non_pipe_close, 8*non_pipe_inside, 8*camera_blocked 
//void update_array(int signal_array[]){
//
//  for(int j=1; j<=6; j++){
//    for(int i = j*size_of_array-2; i>j*size_of_array-9;i--){
//        signal_array[i+1] = signal_array[i];
//    }
//    if(curr_prediction_status[j] == 1){
//      signal_array[j*size_of_array-8] = 1;
//    }else{
//      signal_array[j*size_of_array-8] = 0;
//    }
//    
//  }  
//  
//}
//
//int sum_of_array_element(int start, int end_){
//  int sum = 0;
//  for(int i = start; i<=end_; i++){
//     sum = sum+prediction_status[i];
//  }
//  return sum;
//}
//
////int non_pipe_close_array[6] = {0, 0, 0, 0, 0, 0};
//
//int pipe_predicted = 0; // 0 means false 1 means true
//int non_pipe_predicted = 0; // 0 means false 1 means true

void RespondToDetection(tflite::ErrorReporter* error_reporter,
                        uint8_t class0_score, uint8_t class1_score) {

  error_reporter->Report("=========================================================");      
  error_reporter->Report("");        
//
////  curr_prediction_status[6] = {0, 0, 0, 0, 0, 0};               
// 
////  error_reporter->Report("Non pipe score:%d Pipe score:%d", class0_score,
////                         class1_score);
////  error_reporter->Report("Non pipe score:%f Pipe score:%f", class0_score/255.0,
////                         class1_score/255.0); 
//
//  /*
//   *  Please write code of filling the array of curr_prediction_status by checking prediction class
//   * 
//   * Let's assume curr_prediction_status = [0, 0, 0, 1, 0, 0]
//   */ 
//
//  update_array(prediction_status); // update the prediction 
//
//  int sum[6] = [0, 0, 0, 0, 0, 0];
//
//  for(int i = 0; i<7; i++){
//    for(int j = 8*i; j < 8*(i+1); j++){                                     
//      sum[i] = sum[i] + prediction_status[j];
//    }
//  }
//
//  if((sum[0] > 2 && sum[1] > 2) || pipe_detected == 1){
//    if(( sum[1] > 2 || sum[4] > 0) && pipe_detected == 1) {
//      error_reporter->Report("Prediction is pipe");
//      pipe_detected = 1;
//    }
//    
//  }else if ((sum[2] > 2 && sum[3] > 2)|| non_pipe_detected == 1){
//    if(( sum[3] > 2 || sum[4] > 0) && non_pipe_detected == 1) {
//      error_reporter->Report("Prediction is non pipe");
//      non_pipe_detected = 1;
//    }
//    
//  }
//
//  if (sum[5] > 1 && sum[0] == 0 && sum[1]==0 && sum[2]==0 && sum[3]==0 && sum[4]){
//    pipe_detected = 0;
//    non_pipe_detected = 0;
//  }
//  
////  if( class0_score > class1_score){
////      error_reporter->Report("Prediction is non pipe"); 
////                                           
////  }else if( class0_score < class1_score){
////      error_reporter->Report("Prediction is pipe"); 
////      update_array(pipe_array);  
////      int sum = 0;
////      for(int i= 0; i<6;i++){
////        sum = sum+pipe_array[i];
////      }
////      if(sum > 1){
////        error_reporter->Report("Sum worked fine"); 
////      }
////
////      for(int i= 0; i<6;i++){
////        error_reporter->Report("array %d", pipe_array[i]);
////      }
////                                         
////  }else{
////      error_reporter->Report("Prediction is confused"); 
////                                            
////  }

  error_reporter->Report(""); 

   
}
