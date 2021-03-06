//
//  ActivityIndicatorCommand.h
//  HelloPhoneGap
//
//  Created by Hiedi Utley on 4/8/11.
//  Copyright 2011 Chariot Solutions, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef PHONEGAP_FRAMEWORK

#import <PhoneGap/PhoneGapDelegate.h>

#else
#import "PhoneGapDelegate.h"
#endif

#import <PhoneGap/PGPlugin.h> 
#import "MediaPlayer/MPMoviePlayerViewController.h"
#import "MovieViewController.h"

@interface VideoPlayerCommand : PGPlugin {
    MovieViewController *player;
}

- (void)show:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options;

@end
