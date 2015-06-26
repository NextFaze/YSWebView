Pod::Spec.new do |s|
  s.name     = 'YSWebView'
  s.version  = '1.0.0'
  s.license  = { :type => 'MIT', :file => 'LICENSE' }
  s.summary  = 'YSWebView wraps a webview, UIWebView or WKWebView based on the OS availability'
  s.homepage = 'https://github.com/YardiSystems/YSWebView'
  s.source   = { :git => 'https://github.com/YardiSystems/YSWebView.git',
                 :tag => "#{s.version}" }

  s.description = ''

  s.requires_arc = true
  s.platform     = :ios, "7.0"

  s.preserve_paths = 'README*'

  s.default_subspec = 'Core'

  s.subspec 'Core' do |core|
    core.source_files = 'YSWebView/*.{h,m}'
    core.public_header_files = 'YSWebView/*.h'
    core.dependency 'Masonry'
  end
  
end
