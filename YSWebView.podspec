Pod::Spec.new do |s|
  s.name     = 'YSWebView'
  s.version  = '1.0.1'
  s.license  = { :type => 'MIT', :file => 'LICENSE' }
  s.summary  = 'Wrapper for UIWebView or WKWebView'
  s.homepage = 'https://github.com/YardiSystems/YSWebView'
  s.source   = { :git => 'https://github.com/YardiSystems/YSWebView.git',
                 :tag => "#{s.version}" }
  s.authors  = { 'Bogdan Hapca' => 'bogdan.hapca@yardi.com' }

  s.description = 'YSWebView wraps a webview, UIWebView or WKWebView based on the OS availability'

  s.requires_arc = true
  s.platform     = :ios, "7.0"

  s.preserve_paths = 'README*'

  s.default_subspec = 'Core'

  s.frameworks = 'UIKit'
  s.weak_frameworks = 'WebKit'

  s.subspec 'Core' do |core|
    core.source_files = 'YSWebView/*.{h,m}'
    core.public_header_files = 'YSWebView/*.h'
    core.dependency 'Masonry'
  end
  
end
