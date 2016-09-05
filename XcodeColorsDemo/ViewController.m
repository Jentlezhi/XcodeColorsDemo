//
//  ViewController.m
//  XcodeColorsDemo
//
//  Created by Jentle on 16/9/5.
//  Copyright © 2016年 Jentle. All rights reserved.
//

#import "ViewController.h"
#import "HCLog.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    CGRect textViewF = CGRectMake(0, 20, self.view.bounds.size.width, self.view.bounds.size.height);
    UITextView *textView = [[UITextView alloc] initWithFrame:textViewF];
    textView.textColor = [UIColor grayColor];
    textView.userInteractionEnabled = NO;
    textView.font = [UIFont systemFontOfSize:17];
    textView.backgroundColor = [UIColor whiteColor];
    NSString *content = @"\n1、安装插件，插件Github地址 https://github.com/robbiehanson/XcodeColors。\n2、插件安装好后，退出Xcode，重新打开。\n3、Edit Scheme->Environment Variables中添加 key = XcodeColor value = YES\n4、自定义颜色，详情见HCLog.h文件";
    textView.text = content;
    [self.view addSubview:textView];
    HCLogPink(@"%@",content);

}

@end
