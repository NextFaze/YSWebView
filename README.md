YSWebView
=========
[![Build Status](http://img.shields.io/travis/YardiSystems/YSWebView/master.svg?style=flat)](https://travis-ci.org/YardiSystems/YSWebView)
[![Pod Version](http://img.shields.io/cocoapods/v/YSWebView.svg?style=flat)](http://cocoadocs.org/docsets/YSWebView/)
[![Pod Platform](http://img.shields.io/cocoapods/p/YSWebView.svg?style=flat)](http://cocoadocs.org/docsets/YSWebView/)
[![Pod License](http://img.shields.io/cocoapods/l/YSWebView.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0.html)

YSWebView wraps a webview, [UIWebView](https://developer.apple.com/library/ios/documentation/UIKit/Reference/UIWebView_Class/) or [WKWebView](https://developer.apple.com/library/ios/documentation/WebKit/Reference/WKWebView_Ref/) based on the OS availability.

<p align="left" >
<img src="docs/WKWebView.jpg" title="WKWebView" float=left width=169 hspace=40>
<img src="docs/UIWebView.jpg" title="UIWebView" float=right width=169>
</p>

## How to get started

### install via CocoaPods
```ruby
platform :ios, '7.0'
pod 'YSWebView'
```

### example
```objectivec
#import <YSWebView.h>
...

YSWebView *webView = [[YSWebView alloc] initWithFrame:frame];
[self.view addSubview:webview];

[webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://www.yardi.com"]]];
OR
NSString *htmlString = @"<html><body><h1>title</h1></body></html>";
[webView loadHTMLString:htmlString baseURL:baseUrl];
```

## Requirements

- Xcode4 and above
- iOS 7.0 or above

## Author
- [Bogdan Hapca](bogdan.hapca@yardi.com)

## License
- YSWebView is available under the [MIT license](LICENSE).
