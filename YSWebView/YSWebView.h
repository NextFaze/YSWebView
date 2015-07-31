//
//  YSWebView.h
//
//  Created by Bogdan Hapca on 07/01/15.
//  Copyright (c) 2015 Yardi. All rights reserved.
//

@import UIKit;


typedef NS_ENUM(NSInteger, YSWebViewNavigationType) {
    YSWebViewNavigationTypeLinkClicked,
    YSWebViewNavigationTypeFormSubmitted,
    YSWebViewNavigationTypeBackForward,
    YSWebViewNavigationTypeReload,
    YSWebViewNavigationTypeFormResubmitted,
    YSWebViewNavigationTypeOther
};


@class YSWebView;

@protocol YSWebViewDelegate <NSObject>

@optional
- (void)webViewDidStartLoad:(YSWebView *)webView;
- (void)webViewDidFinishLoad:(YSWebView *)webView;
- (void)webView:(YSWebView *)webView didFailLoadWithError:(NSError *)error;
- (BOOL)webView:(YSWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(YSWebViewNavigationType)navigationType;

@end


typedef void(^JavaScriptCompletionBlock)(NSString *result, NSError *error);


/**
 *  Generic web view class that wraps a UIWebView or WKWebView,
 *  depending on which one is available, as its internal implementation
 */
@interface YSWebView : UIView

@property (nonatomic, weak) id<YSWebViewDelegate> delegate;
@property (nonatomic, readonly, weak) UIScrollView *scrollView;

/**
 * Indicates whether the instances of YSWebView that are backed by WKWebView share the same process pool.
 * That's needed for sharing the cookies and cache between those instances. The default value is YES.
 * If you change this you must do so before calling any of the methods below.
 */
@property (nonatomic, assign) BOOL shareProcessPool;

/**
 * Loads the web view with content returned by an url request
 * @params request - the url request
 */
- (void)loadRequest:(NSURLRequest *)request;

/**
 * Loads the web view with content returned by an url request
 * @params request - the url request
 * @params timeOut - max time imterval to wait for the page to load
 */
- (void)loadRequest:(NSURLRequest *)request timeOut:(NSTimeInterval)timeOut;

/**
 * Loads the web view with HTML content
 * @params string - the string to use as the contents of the webpage
 * @params baseUrl - a URL that's used for resolving relative URLs within the document
 */
- (void)loadHTMLString:(NSString *)string baseURL:(NSURL *)baseURL;

/**
 * Loads the web view with HTML content
 * @params string - the string to use as the contents of the webpage
 * @params baseUrl - a URL that's used for resolving relative URLs within the document
 * @params timeOut - max time imterval to wait for the page to load
 */
- (void)loadHTMLString:(NSString *)string baseURL:(NSURL *)baseURL timeOut:(NSTimeInterval)timeOut;

/**
 * Returns the result of running a script
 * @params script - the script to run
 */
- (void)evaluateJavaScriptFromString:(NSString *)script completionBlock:(JavaScriptCompletionBlock)block;

/**
 * Stops the loading of web view
 */
- (void)stopLoading;

@end
