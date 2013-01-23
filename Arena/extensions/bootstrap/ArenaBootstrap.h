//
//  ArenaBootstrap.h
//  Mixare
//
//  Created by Aswin Ly on 10-01-13.
//  Copyright (c) 2013 Peer GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Mixare/Mixare.h>
#import "BarcodeInput.h"

@interface ArenaBootstrap : UIViewController<PluginEntryPoint, SetDataSourceDelegate> {
    id<StartMainDelegate> mainClass;
    IBOutlet UIButton *scanButton;
    IBOutlet UIButton *reUseArenaButton;
    BarcodeInput *barcode;
}

@property (strong, nonatomic) IBOutlet UIButton *scanButton;
@property (strong, nonatomic) IBOutlet UIButton *reUseArenaButton;

@end
