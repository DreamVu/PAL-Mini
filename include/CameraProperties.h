# ifndef PAL_CAMERA_PROPERTIES_H
# define PAL_CAMERA_PROPERTIES_H

namespace PAL
{

	enum CameraPropertyFlags
	{
        BRIGHTNESS = 0x1,
		CONTRAST = 0x2,
		SATURATION = 0x4,
		GAMMA = 0x8,
		GAIN = 0x10,
		WHITE_BAL_TEMP = 0x20,
		SHARPNESS = 0x40,
		EXPOSURE = 0x80,
		AUTO_WHITE_BAL = 0x100,
		AUTO_EXPOSURE = 0x200,
		RESOLUTION = 0x400,
		COLOR_SPACE = 0x800,
		POWER_LINE_FREQUENCY = 0x1000,
		VERTICAL_FLIP = 0x2000,
		FILTER_DISPARITY = 0x4000,
		FILTER_SPOTS = 0x8000,
        FOV = 0x10000,
		PROJECTION = 0x20000,
		CAMERA_HEIGHT = 0x80000,		
		DETECTION_MODE = 0x100000,
		GROUND_DETECTION = 0x200000,
		YAW = 0x400000,
		PITCH = 0x800000,
		RANGE = 0x1000000,
		STARTHFOV = 0x2000000,
		HFOV_RANGE = 0x4000000,
		STARTVFOV = 0x8000000,
		ENDVFOV   = 0x10000000,
		DEPTH_SCALE = 0x20000000,
		POINTCLOUD_DENSITY = 0x40000000,
		IMAGE_STABILIZATION = 0x80000000,
		DEPTH_STABILIZATION = 0x100000000,		
		ALL = 0x1FFFFFFFF,
		
		ODOA_DEPTHTHRESH = 0x200000000,
		ODOA_DEPTHSIGMA = 0x400000000,
		ODOA_DEPTHREF = 0x800000000,
		ODOA_DEPTHTEMPORAL = 0x1000000000,
		ODOA_BIAS = 0x2000000000,
		ODOA_ALL = 0x3E00000000,
	};

	struct Resolution
	{
		int width;
		int height;
	};

    struct ODOA_Properties
	{
		
    int depth_context_threshold;
    int depth_context_sigma;
    float depth_context_refinement; 
    int depth_context_temporal;
    int bias;
    
    static const int MAX_DEPTH_THRESHOLD = 254;
	static const int MAX_DEPTH_SIGMA = 25;
	static constexpr float MAX_DEPTH_REF = 4;
	static const int MAX_DEPTH_TEMPORAL = 10;
	static const int MAX_BIAS = 25;
    
    static const int MIN_DEPTH_THRESHOLD = 100;
	static const int MIN_DEPTH_SIGMA = 0;
	static constexpr float MIN_DEPTH_REF = 0;
	static const int MIN_DEPTH_TEMPORAL = 0;
	static const int MIN_BIAS = 0;
    
    static const int DEFAULT_DEPTH_THRESHOLD = 212;
	static const int DEFAULT_DEPTH_SIGMA = 0;
	static constexpr float DEFAULT_DEPTH_REF = 1.;
	static const int DEFAULT_DEPTH_TEMPORAL = 1;
	static const int DEFAULT_BIAS = 12;
	
	ODOA_Properties () :
	depth_context_threshold (DEFAULT_DEPTH_THRESHOLD),
	depth_context_sigma     (DEFAULT_DEPTH_SIGMA),
	depth_context_refinement (DEFAULT_DEPTH_REF),
	depth_context_temporal   (DEFAULT_DEPTH_TEMPORAL),
	bias 					(DEFAULT_BIAS)
    {
    }
	};


	enum CaptureType
	{
		DUMMY,
		CAMERA
	};


	enum Acknowledgement
	{
		IGNORED, 
		SUCCESS, 
		FAILURE, 
		INVALID_PROPERTY_VALUE, 
		ERROR_CAMERA_NOT_INITIALIZED
	};

	enum ColorSpace
	{
		RGB,
		YUV444
	};

	enum PowerLineFrequency
	{
		_AUTO,
		_50HZ,
		_60HZ
	};

	enum Projection
	{
		EQUI_RECTANGULAR = 0,
		PERSPECTIVE = 1,
	};
	
	enum DetectionMode
	{
		FLOOR = 1,
		TABLE_TOP = 2,
		CEILING = 3,
		AUTO = 4,
	};

	enum API_Mode
	{
		STEREO = 0x1,
		DEPTH = 0x2,
		RANGE_SCAN = 0x4,
		POINT_CLOUD = 0x8,
		ALL_MODE = 0xF,
	};
	
	struct CameraProperties
	{
	    int brightness;
	    int contrast;
		int saturation;
		int gamma;
		int gain;
		int white_bal_temp;
		int sharpness;
		int exposure;
		bool  auto_white_bal;
		bool  auto_exposure;

		Resolution resolution;
		CaptureType capture_type;
		ColorSpace color_space;
		PowerLineFrequency power_line_frequency;

        // ODOA Parameteres
		ODOA_Properties odoa_params;
			
		bool  vertical_flip;
		bool  filter_disparity;
		bool  filter_spots;
        
		//horizontal FOV in degrees
		int   fov_start; 
		int   fov_end;

		//Projection type : equi-rectangular or perspective
		Projection projection;
		
		//Modes of the camera position to be used in person detection
		DetectionMode detection_mode;
        
        bool ground_detection;
        
        int yaw;
        
        int pitch;
        
        int range; 
		int start_hfov; 
		int hfov_range; 
		int start_vfov; 
		int end_vfov; 
		float camera_height;

		int depth_scale_factor;
		int point_cloud_density;

		int image_stabilization;
		int depth_stabilization;
		
		static const int MAX_IMAGE_STABILIZATION = 6;
		static const int MIN_IMAGE_STABILIZATION = 0;
		static const int DEFAULT_IMAGE_STABILIZATION = 2;
		
		static const int MAX_DEPTH_STABILIZATION = 6;
		static const int MIN_DEPTH_STABILIZATION = 0;
		static const int DEFAULT_DEPTH_STABILIZATION = 5;
		
		static const int MAX_DEPTH_SCALE = 30;
		static const int MIN_DEPTH_SCALE = 1;
		static const int DEFAULT_DEPTH_SCALE = 5;
		
		static const int MAX_POINT_CLOUD_DENSITY = 25;
		static const int MIN_POINT_CLOUD_DENSITY = 1;
		static const int DEFAULT_POINT_CLOUD_DENSITY = 9;
		
        static const int MAX_BRIGHTNESS = 15;
		static const int MIN_BRIGHTNESS = -15;
		static const int DEFAULT_BRIGHTNESS = 0;
		
		static const int MAX_CONTRAST = 30;
		static const int MIN_CONTRAST = 0;
		static const int DEFAULT_CONTRAST = 15;
		
		static const int MAX_SATURATION = 60;
		static const int MIN_SATURATION = 0;
		static const int DEFAULT_SATURATION = 32;

		static const int MAX_GAMMA = 500;
		static const int MIN_GAMMA = 40;
		static const int DEFAULT_GAMMA = 220;

		static const int MAX_GAIN = 100;
		static const int MIN_GAIN = 0;
		static const int DEFAULT_GAIN = 1;

		static const int MAX_WHITE_BAL_TEMP = 10000;
		static const int MIN_WHITE_BAL_TEMP = 1000;
		static const int DEFAULT_WHITE_BAL_TEMP = 5000;
		
		static const int MAX_SHARPNESS = 127;
		static const int MIN_SHARPNESS = 0;
		static const int DEFAULT_SHARPNESS = 0;
		
		static const int MAX_EXPOSURE = 10000;
		static const int MIN_EXPOSURE = 1;
		static const int DEFAULT_EXPOSURE = 500;
				
		static const bool DEFAULT_AUTO_WHITE_BAL = 1;
		static const bool DEFAULT_AUTO_EXPOSURE = 0;

		static const Resolution DEFAULT_RESOLUTION;
		static const CaptureType DEFAULT_CAPTURE_TYPE = CaptureType::CAMERA;
		static const ColorSpace DEFAULT_COLOR_SPACE = RGB;
		static const PowerLineFrequency DEFAULT_POWER_LINE_FREQUENCY = _AUTO;

		static const bool DEFAULT_VERTICAL_FLIP = false;
		static const bool DEFAULT_FILTER_DISPARITY = true;
		static const bool DEFAULT_FILTER_SPOTS = true;
        
		static const int DEFAULT_FOV_START = 0;
		static const int DEFAULT_FOV_END = 360;

		static const Projection DEFAULT_PROJECTION = EQUI_RECTANGULAR;

		static const DetectionMode DEFAULT_DETECTION_MODE = TABLE_TOP;
		
		static const bool DEFAULT_GROUND_DETECTION = false;		
		
		static const int MAX_YAW = 359;
		static const int MIN_YAW = 0;
		static const int DEFAULT_YAW = 65;
		
		static const int MAX_PITCH = 25;
		static const int MIN_PITCH = 0;
		static const int DEFAULT_PITCH = 0;
		
		static const int MAX_RANGE = 500;
		static const int MAX_START_HFOV = 308;
		static const int MAX_HFOV_RANGE = 360;
		static const int MAX_START_VFOV = 18;
		static const int MAX_END_VFOV = 17;
		static constexpr float MAX_CAMERA_HEIGHT = 300;
	
		static const int MIN_RANGE = 0;
		static const int MIN_START_HFOV = 0;
		static const int MIN_HFOV_RANGE = 52;
		static const int MIN_START_VFOV = -70;
		static const int MIN_END_VFOV = -71;
		static constexpr float MIN_CAMERA_HEIGHT = 0;
	
		static const int DEFAULT_RANGE = 500;
		static const int DEFAULT_START_HFOV = 0;
		static const int DEFAULT_HFOV_RANGE = 360;
		static const int DEFAULT_START_VFOV = 10;
		static const int DEFAULT_END_VFOV = -52;
		static constexpr float DEFAULT_CAMERA_HEIGHT = 25;
	
		CameraProperties() :
			brightness           (DEFAULT_BRIGHTNESS),
			contrast             (DEFAULT_CONTRAST), 
			saturation           (DEFAULT_SATURATION),
			gamma                (DEFAULT_GAMMA),
			gain                 (DEFAULT_GAIN),
			white_bal_temp       (DEFAULT_WHITE_BAL_TEMP),
			sharpness            (DEFAULT_SHARPNESS),
			exposure             (DEFAULT_EXPOSURE),
			auto_white_bal       (DEFAULT_AUTO_WHITE_BAL),
			auto_exposure        (DEFAULT_AUTO_EXPOSURE),
			resolution           (DEFAULT_RESOLUTION),
			capture_type		 (DEFAULT_CAPTURE_TYPE),
			color_space          (DEFAULT_COLOR_SPACE),
			power_line_frequency (DEFAULT_POWER_LINE_FREQUENCY),
			vertical_flip        (DEFAULT_VERTICAL_FLIP),
			filter_disparity     (DEFAULT_FILTER_DISPARITY),
			filter_spots 	     (DEFAULT_FILTER_SPOTS),
			fov_start            (DEFAULT_FOV_START),
			fov_end              (DEFAULT_FOV_END),
			projection           (DEFAULT_PROJECTION),
			camera_height	     (DEFAULT_CAMERA_HEIGHT),			
			detection_mode 	     (DEFAULT_DETECTION_MODE),
			ground_detection     (DEFAULT_GROUND_DETECTION),
			yaw      			 	(DEFAULT_YAW),
			pitch      				(DEFAULT_PITCH),
			range        			(DEFAULT_RANGE),
			start_hfov         (DEFAULT_START_HFOV),
			hfov_range         (DEFAULT_HFOV_RANGE),
			start_vfov         (DEFAULT_START_VFOV),
			end_vfov           (DEFAULT_END_VFOV),
			depth_scale_factor (DEFAULT_DEPTH_SCALE),
			point_cloud_density (DEFAULT_POINT_CLOUD_DENSITY),
			image_stabilization  (DEFAULT_IMAGE_STABILIZATION),
			depth_stabilization  (DEFAULT_DEPTH_STABILIZATION) 
		{
		}
	};

}//namespace

# endif //PAL_CAMERA_PROPERTIES_H

