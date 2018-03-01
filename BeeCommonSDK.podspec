
Pod::Spec.new do |s|

  s.name         = "BeeCommonSDK"
  s.version      = "0.0.2"
  s.summary      = "BeeCommonSDK是集合基本使用功能"
  s.description  = <<-DESC
    0.0.1:基础功能
                   DESC

  s.homepage     = "https://github.com/5hito/BeeCommonSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }

  s.ios.deployment_target    = '8.0'
  s.source       = { :git => "https://github.com/5hito/BeeCommonSDK.git", :tag => s.version.to_s }

  s.frameworks = "AdSupport"
  s.resources = 'lib/*.bundle'

  s.requires_arc = true
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/lib/BeeCommonLibrary.framework/Headers/" }
  s.ios.vendored_framework   = 'lib/BeeCommonLibrary.framework'

end
