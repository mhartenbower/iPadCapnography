//
//  ViewController.h
//  Capstone2
//
//  Created by Johnathan Cornella on 2/6/15.
//  Copyright (c) 2015 Johnathan Cornella. All rights reserved.
//

#import "RFduinoDelegate.h"
#import "RFduino.h"
#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"
#import "AppData.h"

//Import the necessary frameworks

@interface AppViewController : UIViewController <RFduinoDelegate, CPTPlotDataSource>

{
    CPTXYGraph *graph1;
    CPTXYGraph *graph2;
    AppData *appData;
    BOOL hasRun;
}


@property (strong, nonatomic) UIWindow *window;
@property (weak, nonatomic) IBOutlet UILabel *Label1;
@property (weak, nonatomic) IBOutlet UILabel *Label2;
@property (weak, nonatomic) IBOutlet CPTGraphHostingView *graphView1;
@property (weak, nonatomic) IBOutlet CPTGraphHostingView *graphView2;
@property(nonatomic, assign) BOOL hasRun;
@property(nonatomic, strong) RFduino *rfduino;


@end



