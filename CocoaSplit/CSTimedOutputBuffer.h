//
//  CSTimedOutputBuffer.h
//  CocoaSplit
//
//  Created by Zakk on 4/2/16.
//  Copyright © 2016 Zakk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VideoCompressor.h"
#import "FFMpegTask.h"
#import "CSIRCompressor.h"


@interface CSTimedOutputBuffer : NSObject
{
    NSMutableArray *_frameBuffer;
    FFMpegTask *_outFFMpeg;
    float _currentBufferDuration;
    
}



@property (assign) float bufferDuration;
@property (strong) NSString *name;
@property (strong) CSIRCompressor *compressor;

-(void) writeCurrentBuffer:(NSString *)toFile;
-(instancetype) initWithCompressor:(id<VideoCompressor>)compressor;


@end
