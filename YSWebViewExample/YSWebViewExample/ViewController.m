//
//  ViewController.m
//  YSWebViewExample
//
//  Created by Bogdan Poplauschi on 26/06/15.
//  Copyright (c) 2015 Yardi. All rights reserved.
//

#import "ViewController.h"
#import <YSWebView.h>

@interface ViewController ()

@property (nonatomic, weak) IBOutlet YSWebView *webView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSURLRequest *urlRequest = [NSURLRequest requestWithURL:[NSURL URLWithString:@"http://www.yardi.com"]];
    [self.webView loadRequest:urlRequest];
}

@end
