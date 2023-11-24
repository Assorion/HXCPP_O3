// Generated by Haxe 4.3.1
#ifndef INCLUDED_PathManager
#define INCLUDED_PathManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(PathManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES PathManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PathManager_obj OBJ_;
		PathManager_obj();

	public:
		enum { _hx_ClassId = 0x086b1c9c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="PathManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"PathManager"); }

		inline static ::hx::ObjectPtr< PathManager_obj > __new() {
			::hx::ObjectPtr< PathManager_obj > __this = new PathManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PathManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PathManager_obj *__this = (PathManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PathManager_obj), false, "PathManager"));
			*(void **)__this = PathManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PathManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PathManager",28,9b,ad,d4); }

		static void __boot();
		static  ::haxe::ds::StringMap directoryCache;
		static  ::haxe::ds::StringMap haxelibPaths;
		static ::String combine(::String firstPath,::String secondPath);
		static ::Dynamic combine_dyn();

		static ::String escape(::String path);
		static ::Dynamic escape_dyn();

		static ::String expand(::String path);
		static ::Dynamic expand_dyn();

		static ::String getHaxelib(::String haxelib,::String version,::hx::Null< bool >  validate,::hx::Null< bool >  clearCache);
		static ::Dynamic getHaxelib_dyn();

		static bool isAbsolute(::String path);
		static ::Dynamic isAbsolute_dyn();

		static void mkdir(::String directory,::hx::Null< bool >  skipFilePart);
		static ::Dynamic mkdir_dyn();

		static void removeDirectory(::String directory);
		static ::Dynamic removeDirectory_dyn();

		static void removeFile(::String file);
		static ::Dynamic removeFile_dyn();

		static void removeFilesWithExtension(::String inExt);
		static ::Dynamic removeFilesWithExtension_dyn();

		static void resetDirectoryCache();
		static ::Dynamic resetDirectoryCache_dyn();

		static ::String standardize(::String path,::hx::Null< bool >  trailingSlash);
		static ::Dynamic standardize_dyn();

		static ::String clean(::String path);
		static ::Dynamic clean_dyn();

};


#endif /* INCLUDED_PathManager */ 