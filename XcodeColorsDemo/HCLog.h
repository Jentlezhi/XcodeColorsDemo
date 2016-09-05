//
//  HCLog.h
//  HelperCar
//
//  Created by Jentle on 16/7/27.
//  Copyright © 2016年 Jentle. All rights reserved.
//

#ifndef HCLog_h
#define HCLog_h

/**
 *  日志输出
 */
#ifdef DEBUG
#define HCLog(...) NSLog(__VA_ARGS__)
/**
 *  控制台输出指定颜色信息
 */
#define XCODE_COLORS_ESCAPE @"\033["
#define XCODE_COLORS_RESET_FG XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET XCODE_COLORS_ESCAPE @";"

#define HCLogBlue(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,0,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogRed(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogGreen(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,238,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogCyan(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,255,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogPink(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg250,20,147;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogPurple(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg160,32,240;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define HCLogGray(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg207,207,207;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
/**
 *  日志输出函数
 */
#define HCLogFunc RTLog(@"%s", __func__)

#else
#define HCLog(...)
#define HCLogBlue(frmt, ...)
#define HCLogRed(frmt, ...)
#define HCLogGreen(frmt, ...)
#define HCLogGreen(frmt, ...)
#define HCLogCyan(frmt, ...)
#define HCLogPink(frmt, ...)
#define HCLogPink(frmt, ...)
#define HCLogPurple(frmt, ...)
#define HCLogGray(frmt, ...)
#define HCLogFunc(...)

#endif


#endif /* HCLog_h */
