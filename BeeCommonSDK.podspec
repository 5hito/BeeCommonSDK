
Pod::Spec.new do |s|

  s.name         = "BeeCommonSDK"
  s.version      = "0.0.3"
  s.summary      = "集合基本使用功能"
  s.description  = <<-DESC
    0.0.x:基础功能合集使用
                   DESC

  s.homepage     = "https://github.com/5hito/BeeCommonSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }

  s.ios.deployment_target    = '8.0'
  s.source       = { :git => "https://github.com/5hito/BeeCommonSDK.git", :tag => s.version.to_s }

  s.frameworks = "AdSupport"
  s.resources = 'lib/*.bundle'

  s.requires_arc = true
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(PODS_ROOT)/lib/BeeCommonLibrary.framework/Headers/" }
  s.ios.vendored_framework   = 'lib/BeeCommonLibrary.framework'

end
