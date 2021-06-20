.. _Data-Products-DP0-1-schema_reference: 
  
############################################## 
Schema for dp01_dc2_catalogs.forced_photometry 
############################################## 
  
**coord_dec** (unit=rad, type=double): position in ra/dec 
 
**coord_ra** (unit=rad, type=double): position in ra/dec 
 
**g_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**g_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**g_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**g_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**g_base_InputCount_value** (type=int, min=4.00E+01, max=5.40E+01): Number of images contributing at center, not including anyclipping 
 
**g_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**g_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**g_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.73E-03, max=6.67E-03): background in annulus around source 
 
**g_base_LocalBackground_instFluxErr** (unit=count, type=double, min=2.29E-02, max=2.85E-02): 1-sigma instFlux uncertainty 
 
**g_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**g_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**g_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**g_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**g_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**g_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**g_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**g_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=0): Cosmic ray in the Source center 
 
**g_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**g_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**g_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**g_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**g_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=0): Interpolated pixel in the Source center 
 
**g_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**g_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**g_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**g_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**g_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**g_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**g_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**g_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**g_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**g_base_PsfFlux_apCorr** (type=double, min=9.92E-01, max=9.96E-01): aperture correction applied to base_PsfFlux 
 
**g_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**g_base_PsfFlux_area** (unit=pixel, type=double, min=4.96E+01, max=5.68E+01): effective area of PSF 
 
**g_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**g_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**g_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**g_base_PsfFlux_instFlux** (unit=count, type=double, min=-4.18E-01, max=8.81E+02): instFlux derived from linear least-squares fit of PSF model 
 
**g_base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.78E-01, max=5.72E-01): 1-sigma instFlux uncertainty 
 
**g_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**g_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**g_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**g_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**g_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**g_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**g_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**g_base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.95E-03, max=9.63E+03): 1-sigma uncertainty on x position 
 
**g_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**g_base_SdssCentroid_yErr** (unit=pixel, type=double, min=1.81E-03, max=8.81E+03): 1-sigma uncertainty on y position 
 
**g_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**g_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**g_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**g_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**g_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**g_base_SdssShape_instFlux** (unit=count, type=double, min=2.50E-01, max=7.98E+02): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-3.49E+02, max=1.81E+00): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**g_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-5.35E+02, max=4.19E+00): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**g_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-4.30E+02, max=4.26E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**g_base_SdssShape_instFluxErr** (unit=count, type=double, min=7.45E-02, max=1.35E+00): 1-sigma instFlux uncertainty 
 
**g_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.34E+00, max=3.79E+00): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-5.96E-03, max=1.58E-02): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.05E+00, max=3.47E+00): adaptive moments of the PSF model at the object position 
 
**g_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xx** (unit=pixel^2, type=double, min=1.63E-02, max=3.58E+05): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=4.83E-03, max=5.16E+02): Standard deviation of xx moment 
 
**g_base_SdssShape_xy** (unit=pixel^2, type=double, min=-1.08E+05, max=5.79E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=6.75E-03, max=7.92E+02): Standard deviation of xy moment 
 
**g_base_SdssShape_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_yy** (unit=pixel^2, type=double, min=4.24E-02, max=3.32E+05): elliptical Gaussian adaptive moments 
 
**g_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=5.04E-03, max=6.38E+02): Standard deviation of yy moment 
 
**g_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**g_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**g_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**g_base_Variance_value** (type=double, min=6.05E-04, max=8.47E-04): Variance at object position 
 
**g_good** (type=boolean, min=1, max=1): True if the source has no flagged pixels. 
 
**g_modelfit_CModel_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel 
 
**g_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**g_modelfit_CModel_dev_apCorr** (type=double, min=9.89E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**g_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**g_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-3.83E-01, max=7.43E+02): flux from the de Vaucouleur fit region, with no extrapolation 
 
**g_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-4.38E-01, max=8.80E+02): flux from the de Vaucouleur fit 
 
**g_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=1.80E-01, max=3.78E+00): flux uncertainty from the de Vaucouleur fit 
 
**g_modelfit_CModel_exp_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**g_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**g_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-3.83E-01, max=7.43E+02): flux from the exponential fit region, with no extrapolation 
 
**g_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-4.39E-01, max=8.80E+02): flux from the exponential fit 
 
**g_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.80E-01, max=1.71E+00): flux uncertainty from the exponential fit 
 
**g_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**g_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**g_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**g_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**g_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**g_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**g_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**g_modelfit_CModel_initial_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**g_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**g_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**g_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**g_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-3.96E-01, max=7.43E+02): flux from the initial fit region, with no extrapolation 
 
**g_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-4.56E-01, max=8.80E+02): flux from the initial fit 
 
**g_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.80E-01, max=1.54E+00): flux uncertainty from the initial fit 
 
**g_modelfit_CModel_instFlux** (unit=count, type=double, min=-4.38E-01, max=8.80E+02): flux from the final cmodel fit 
 
**g_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-3.83E-01, max=7.43E+02): flux within the fit region, with no extrapolation 
 
**g_modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.80E-01, max=1.71E+00): flux uncertainty from the final cmodel fit 
 
**g_modelfit_CModel_objective** (type=double, min=1.05E-02, max=7.88E-01): -ln(likelihood) (chi^2) in cmodel fit 
 
**i_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**i_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**i_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**i_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**i_base_InputCount_value** (type=int, min=8.40E+01, max=1.02E+02): Number of images contributing at center, not including anyclipping 
 
**i_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**i_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**i_base_LocalBackground_instFlux** (unit=count, type=double, min=-4.33E-03, max=1.49E-02): background in annulus around source 
 
**i_base_LocalBackground_instFluxErr** (unit=count, type=double, min=5.69E-02, max=6.67E-02): 1-sigma instFlux uncertainty 
 
**i_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**i_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**i_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**i_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**i_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**i_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**i_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**i_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**i_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**i_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**i_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**i_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**i_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**i_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**i_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**i_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**i_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**i_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**i_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**i_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**i_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**i_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**i_base_PsfFlux_apCorr** (type=double, min=9.94E-01, max=9.97E-01): aperture correction applied to base_PsfFlux 
 
**i_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**i_base_PsfFlux_area** (unit=pixel, type=double, min=4.52E+01, max=4.84E+01): effective area of PSF 
 
**i_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**i_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**i_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**i_base_PsfFlux_instFlux** (unit=count, type=double, min=-3.96E-01, max=1.34E+03): instFlux derived from linear least-squares fit of PSF model 
 
**i_base_PsfFlux_instFluxErr** (unit=count, type=double, min=4.07E-01, max=7.22E-01): 1-sigma instFlux uncertainty 
 
**i_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**i_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**i_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**i_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**i_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**i_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**i_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**i_base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.52E-03, max=2.29E+04): 1-sigma uncertainty on x position 
 
**i_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**i_base_SdssCentroid_yErr** (unit=pixel, type=double, min=1.53E-03, max=1.76E+04): 1-sigma uncertainty on y position 
 
**i_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**i_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**i_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**i_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**i_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**i_base_SdssShape_instFlux** (unit=count, type=double, min=6.72E-01, max=1.21E+03): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-1.05E+03, max=2.23E+04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**i_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-1.12E+03, max=5.65E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**i_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-3.55E+03, max=4.96E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**i_base_SdssShape_instFluxErr** (unit=count, type=double, min=1.50E-01, max=4.69E+00): 1-sigma instFlux uncertainty 
 
**i_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=2.97E+00, max=3.16E+00): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-1.11E-02, max=3.75E-03): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=2.94E+00, max=3.13E+00): adaptive moments of the PSF model at the object position 
 
**i_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xx** (unit=pixel^2, type=double, min=7.06E-02, max=3.24E+05): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=5.31E-03, max=6.62E+02): Standard deviation of xx moment 
 
**i_base_SdssShape_xy** (unit=pixel^2, type=double, min=-1.97E+04, max=1.65E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=5.27E-03, max=7.28E+02): Standard deviation of xy moment 
 
**i_base_SdssShape_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_yy** (unit=pixel^2, type=double, min=5.01E-02, max=3.08E+05): elliptical Gaussian adaptive moments 
 
**i_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=3.74E-03, max=4.40E+02): Standard deviation of yy moment 
 
**i_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**i_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**i_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**i_base_Variance_value** (type=double, min=3.58E-03, max=4.47E-03): Variance at object position 
 
**i_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**i_modelfit_CModel_apCorr** (type=double, min=9.92E-01, max=9.95E-01): aperture correction applied to modelfit_CModel 
 
**i_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**i_modelfit_CModel_dev_apCorr** (type=double, min=9.91E-01, max=9.94E-01): aperture correction applied to modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**i_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**i_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-3.56E-01, max=1.15E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**i_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-4.09E-01, max=1.34E+03): flux from the de Vaucouleur fit 
 
**i_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=4.12E-01, max=9.29E+00): flux uncertainty from the de Vaucouleur fit 
 
**i_modelfit_CModel_exp_apCorr** (type=double, min=9.92E-01, max=9.95E-01): aperture correction applied to modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**i_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**i_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-3.57E-01, max=1.15E+03): flux from the exponential fit region, with no extrapolation 
 
**i_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-4.09E-01, max=1.34E+03): flux from the exponential fit 
 
**i_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=4.13E-01, max=4.22E+00): flux uncertainty from the exponential fit 
 
**i_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**i_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**i_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**i_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**i_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**i_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**i_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**i_modelfit_CModel_initial_apCorr** (type=double, min=9.92E-01, max=9.95E-01): aperture correction applied to modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**i_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**i_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**i_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**i_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-3.57E-01, max=1.15E+03): flux from the initial fit region, with no extrapolation 
 
**i_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-4.09E-01, max=1.34E+03): flux from the initial fit 
 
**i_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=4.13E-01, max=3.80E+00): flux uncertainty from the initial fit 
 
**i_modelfit_CModel_instFlux** (unit=count, type=double, min=-4.09E-01, max=1.34E+03): flux from the final cmodel fit 
 
**i_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-3.56E-01, max=1.15E+03): flux within the fit region, with no extrapolation 
 
**i_modelfit_CModel_instFluxErr** (unit=count, type=double, min=4.12E-01, max=4.21E+00): flux uncertainty from the final cmodel fit 
 
**i_modelfit_CModel_objective** (type=double, min=4.80E-02, max=3.86E+00): -ln(likelihood) (chi^2) in cmodel fit 
 
**objectId** (type=long): Unique id. 
 
**r_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**r_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**r_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**r_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**r_base_InputCount_value** (type=int, min=1.01E+02, max=1.21E+02): Number of images contributing at center, not including anyclipping 
 
**r_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**r_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**r_base_LocalBackground_instFlux** (unit=count, type=double, min=-2.04E-03, max=1.05E-02): background in annulus around source 
 
**r_base_LocalBackground_instFluxErr** (unit=count, type=double, min=2.81E-02, max=3.38E-02): 1-sigma instFlux uncertainty 
 
**r_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**r_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**r_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**r_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**r_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**r_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**r_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**r_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**r_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**r_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**r_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**r_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**r_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**r_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**r_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**r_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**r_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**r_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**r_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**r_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**r_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**r_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**r_base_PsfFlux_apCorr** (type=double, min=9.92E-01, max=9.95E-01): aperture correction applied to base_PsfFlux 
 
**r_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**r_base_PsfFlux_area** (unit=pixel, type=double, min=4.84E+01, max=5.32E+01): effective area of PSF 
 
**r_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**r_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**r_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**r_base_PsfFlux_instFlux** (unit=count, type=double, min=7.89E-02, max=1.20E+03): instFlux derived from linear least-squares fit of PSF model 
 
**r_base_PsfFlux_instFluxErr** (unit=count, type=double, min=2.14E-01, max=4.81E-01): 1-sigma instFlux uncertainty 
 
**r_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**r_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**r_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**r_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**r_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**r_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**r_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**r_base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.16E-03, max=1.67E+03): 1-sigma uncertainty on x position 
 
**r_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**r_base_SdssCentroid_yErr** (unit=pixel, type=double, min=1.16E-03, max=3.75E+03): 1-sigma uncertainty on y position 
 
**r_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**r_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**r_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**r_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**r_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**r_base_SdssShape_instFlux** (unit=count, type=double, min=6.60E-01, max=1.08E+03): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-5.07E+02, max=-6.37E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**r_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-2.73E+02, max=-6.75E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**r_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-3.11E+02, max=1.28E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**r_base_SdssShape_instFluxErr** (unit=count, type=double, min=1.32E-01, max=1.70E+00): 1-sigma instFlux uncertainty 
 
**r_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.13E+00, max=3.38E+00): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-9.88E-03, max=2.85E-03): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.07E+00, max=3.33E+00): adaptive moments of the PSF model at the object position 
 
**r_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xx** (unit=pixel^2, type=double, min=5.65E-02, max=2.27E+05): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=4.32E-03, max=5.96E+02): Standard deviation of xx moment 
 
**r_base_SdssShape_xy** (unit=pixel^2, type=double, min=-2.67E+04, max=1.15E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=4.23E-03, max=3.93E+02): Standard deviation of xy moment 
 
**r_base_SdssShape_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=2.35E+05): elliptical Gaussian adaptive moments 
 
**r_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=3.02E-03, max=4.48E+02): Standard deviation of yy moment 
 
**r_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**r_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**r_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**r_base_Variance_value** (type=double, min=9.06E-04, max=1.09E-03): Variance at object position 
 
**r_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**r_modelfit_CModel_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel 
 
**r_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**r_modelfit_CModel_dev_apCorr** (type=double, min=9.89E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**r_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**r_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=1.10E-01, max=1.01E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**r_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=1.32E-01, max=1.20E+03): flux from the de Vaucouleur fit 
 
**r_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=2.14E-01, max=4.60E+00): flux uncertainty from the de Vaucouleur fit 
 
**r_modelfit_CModel_exp_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**r_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**r_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=0): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=9.24E-02, max=1.00E+03): flux from the exponential fit region, with no extrapolation 
 
**r_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=1.05E-01, max=1.20E+03): flux from the exponential fit 
 
**r_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=2.14E-01, max=2.08E+00): flux uncertainty from the exponential fit 
 
**r_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**r_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**r_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**r_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**r_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**r_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**r_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**r_modelfit_CModel_initial_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**r_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**r_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=0): The original fit in the reference catalog failed. 
 
**r_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**r_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=9.12E-02, max=1.01E+03): flux from the initial fit region, with no extrapolation 
 
**r_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=1.03E-01, max=1.20E+03): flux from the initial fit 
 
**r_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=2.14E-01, max=1.87E+00): flux uncertainty from the initial fit 
 
**r_modelfit_CModel_instFlux** (unit=count, type=double, min=1.32E-01, max=1.20E+03): flux from the final cmodel fit 
 
**r_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=1.10E-01, max=1.01E+03): flux within the fit region, with no extrapolation 
 
**r_modelfit_CModel_instFluxErr** (unit=count, type=double, min=2.14E-01, max=2.08E+00): flux uncertainty from the final cmodel fit 
 
**r_modelfit_CModel_objective** (type=double, min=1.48E-02, max=9.37E-01): -ln(likelihood) (chi^2) in cmodel fit 
 
**u_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**u_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**u_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**u_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**u_base_InputCount_value** (type=int, min=2.20E+01, max=3.40E+01): Number of images contributing at center, not including anyclipping 
 
**u_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**u_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**u_base_LocalBackground_instFlux** (unit=count, type=double, min=-6.10E-03, max=6.79E-03): background in annulus around source 
 
**u_base_LocalBackground_instFluxErr** (unit=count, type=double, min=6.86E-02, max=8.28E-02): 1-sigma instFlux uncertainty 
 
**u_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**u_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**u_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**u_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**u_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=1): Source footprint includes CLIPPED pixels 
 
**u_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**u_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**u_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**u_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**u_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**u_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**u_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**u_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**u_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**u_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=0): Source footprint includes REJECTED pixels 
 
**u_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=0): Source center is close to REJECTED pixels 
 
**u_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**u_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**u_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**u_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**u_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**u_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**u_base_PsfFlux_apCorr** (type=double, min=9.90E-01, max=9.94E-01): aperture correction applied to base_PsfFlux 
 
**u_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**u_base_PsfFlux_area** (unit=pixel, type=double, min=5.66E+01, max=6.78E+01): effective area of PSF 
 
**u_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**u_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**u_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**u_base_PsfFlux_instFlux** (unit=count, type=double, min=-2.50E+00, max=3.61E+02): instFlux derived from linear least-squares fit of PSF model 
 
**u_base_PsfFlux_instFluxErr** (unit=count, type=double, min=5.47E-01, max=1.09E+00): 1-sigma instFlux uncertainty 
 
**u_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**u_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**u_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=0): Object too close to edge 
 
**u_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**u_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**u_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**u_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**u_base_SdssCentroid_xErr** (unit=pixel, type=double, min=1.04E-02, max=1.30E+04): 1-sigma uncertainty on x position 
 
**u_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**u_base_SdssCentroid_yErr** (unit=pixel, type=double, min=9.56E-03, max=1.83E+04): 1-sigma uncertainty on y position 
 
**u_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**u_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**u_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**u_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**u_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**u_base_SdssShape_instFlux** (unit=count, type=double, min=3.53E-01, max=3.30E+02): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-9.63E+01, max=-8.66E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**u_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-1.10E+02, max=-8.50E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**u_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-9.03E+00, max=1.13E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**u_base_SdssShape_instFluxErr** (unit=count, type=double, min=2.23E-01, max=2.13E+00): 1-sigma instFlux uncertainty 
 
**u_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.96E+00, max=4.62E+00): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-4.47E-02, max=-5.80E-03): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.54E+00, max=4.20E+00): adaptive moments of the PSF model at the object position 
 
**u_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xx** (unit=pixel^2, type=double, min=4.17E-02, max=1.09E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=4.29E-02, max=1.27E+02): Standard deviation of xx moment 
 
**u_base_SdssShape_xy** (unit=pixel^2, type=double, min=-8.17E+02, max=9.07E+03): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=6.80E-03, max=1.21E+02): Standard deviation of xy moment 
 
**u_base_SdssShape_y** (unit=pixel, type=double, min=7.28E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_yy** (unit=pixel^2, type=double, min=7.31E-02, max=1.24E+04): elliptical Gaussian adaptive moments 
 
**u_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.64E-02, max=2.53E+01): Standard deviation of yy moment 
 
**u_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**u_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**u_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**u_base_Variance_value** (type=double, min=4.94E-03, max=7.53E-03): Variance at object position 
 
**u_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**u_modelfit_CModel_apCorr** (type=double, min=9.89E-01, max=9.92E-01): aperture correction applied to modelfit_CModel 
 
**u_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**u_modelfit_CModel_dev_apCorr** (type=double, min=9.88E-01, max=9.92E-01): aperture correction applied to modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**u_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**u_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-2.00E+00, max=2.88E+02): flux from the de Vaucouleur fit region, with no extrapolation 
 
**u_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-2.38E+00, max=3.61E+02): flux from the de Vaucouleur fit 
 
**u_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=5.50E-01, max=1.12E+01): flux uncertainty from the de Vaucouleur fit 
 
**u_modelfit_CModel_exp_apCorr** (type=double, min=9.89E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**u_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**u_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-2.00E+00, max=2.88E+02): flux from the exponential fit region, with no extrapolation 
 
**u_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-2.37E+00, max=3.61E+02): flux from the exponential fit 
 
**u_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=5.50E-01, max=5.04E+00): flux uncertainty from the exponential fit 
 
**u_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**u_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**u_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**u_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**u_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**u_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**u_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**u_modelfit_CModel_initial_apCorr** (type=double, min=9.89E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**u_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**u_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**u_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**u_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-2.01E+00, max=2.88E+02): flux from the initial fit region, with no extrapolation 
 
**u_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-2.40E+00, max=3.61E+02): flux from the initial fit 
 
**u_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=5.52E-01, max=4.54E+00): flux uncertainty from the initial fit 
 
**u_modelfit_CModel_instFlux** (unit=count, type=double, min=-2.38E+00, max=3.61E+02): flux from the final cmodel fit 
 
**u_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-2.00E+00, max=2.88E+02): flux within the fit region, with no extrapolation 
 
**u_modelfit_CModel_instFluxErr** (unit=count, type=double, min=5.50E-01, max=9.11E+00): flux uncertainty from the final cmodel fit 
 
**u_modelfit_CModel_objective** (type=double, min=9.10E-02, max=5.64E+00): -ln(likelihood) (chi^2) in cmodel fit 
 
**y_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**y_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**y_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**y_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**y_base_InputCount_value** (type=int, min=6.30E+01, max=8.10E+01): Number of images contributing at center, not including anyclipping 
 
**y_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**y_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**y_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.13E-02, max=3.25E-02): background in annulus around source 
 
**y_base_LocalBackground_instFluxErr** (unit=count, type=double, min=2.43E-01, max=2.86E-01): 1-sigma instFlux uncertainty 
 
**y_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**y_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**y_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**y_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**y_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**y_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**y_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**y_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**y_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**y_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**y_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**y_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**y_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**y_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**y_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**y_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**y_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**y_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**y_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**y_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**y_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**y_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**y_base_PsfFlux_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to base_PsfFlux 
 
**y_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**y_base_PsfFlux_area** (unit=pixel, type=double, min=8.64E+01, max=9.06E+01): effective area of PSF 
 
**y_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**y_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**y_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**y_base_PsfFlux_instFlux** (unit=count, type=double, min=-6.61E+00, max=1.38E+03): instFlux derived from linear least-squares fit of PSF model 
 
**y_base_PsfFlux_instFluxErr** (unit=count, type=double, min=2.31E+00, max=2.75E+00): 1-sigma instFlux uncertainty 
 
**y_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**y_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**y_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**y_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**y_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**y_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**y_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**y_base_SdssCentroid_xErr** (unit=pixel, type=double, min=8.36E-03, max=1.00E+04): 1-sigma uncertainty on x position 
 
**y_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**y_base_SdssCentroid_yErr** (unit=pixel, type=double, min=8.42E-03, max=2.67E+03): 1-sigma uncertainty on y position 
 
**y_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**y_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**y_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**y_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**y_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**y_base_SdssShape_instFlux** (unit=count, type=double, min=1.13E+00, max=1.31E+03): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-2.55E+04, max=-1.81E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**y_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-6.61E+04, max=-2.37E-03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**y_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-4.10E+04, max=3.03E+02): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**y_base_SdssShape_instFluxErr** (unit=count, type=double, min=6.85E-01, max=1.90E+01): 1-sigma instFlux uncertainty 
 
**y_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=6.15E+00, max=6.42E+00): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-1.37E-02, max=4.30E-03): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=6.13E+00, max=6.40E+00): adaptive moments of the PSF model at the object position 
 
**y_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xx** (unit=pixel^2, type=double, min=8.33E-02, max=4.38E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=5.07E-03, max=2.90E+03): Standard deviation of xx moment 
 
**y_base_SdssShape_xy** (unit=pixel^2, type=double, min=-3.46E+03, max=8.41E+03): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=6.16E-03, max=7.51E+03): Standard deviation of xy moment 
 
**y_base_SdssShape_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=4.29E+04): elliptical Gaussian adaptive moments 
 
**y_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=8.79E-03, max=4.66E+03): Standard deviation of yy moment 
 
**y_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**y_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**y_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**y_base_Variance_value** (type=double, min=6.21E-02, max=8.15E-02): Variance at object position 
 
**y_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**y_modelfit_CModel_apCorr** (type=double, min=9.88E-01, max=9.90E-01): aperture correction applied to modelfit_CModel 
 
**y_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**y_modelfit_CModel_dev_apCorr** (type=double, min=9.88E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**y_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**y_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-6.82E+00, max=9.86E+02): flux from the de Vaucouleur fit region, with no extrapolation 
 
**y_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-9.03E+00, max=1.38E+03): flux from the de Vaucouleur fit 
 
**y_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=2.38E+00, max=3.97E+01): flux uncertainty from the de Vaucouleur fit 
 
**y_modelfit_CModel_exp_apCorr** (type=double, min=9.88E-01, max=9.91E-01): aperture correction applied to modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**y_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**y_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-6.77E+00, max=9.86E+02): flux from the exponential fit region, with no extrapolation 
 
**y_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-7.61E+00, max=1.38E+03): flux from the exponential fit 
 
**y_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=2.38E+00, max=1.78E+01): flux uncertainty from the exponential fit 
 
**y_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**y_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**y_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**y_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**y_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**y_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**y_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**y_modelfit_CModel_initial_apCorr** (type=double, min=9.89E-01, max=9.91E-01): aperture correction applied to modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**y_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**y_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**y_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**y_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-6.76E+00, max=9.86E+02): flux from the initial fit region, with no extrapolation 
 
**y_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-7.57E+00, max=1.38E+03): flux from the initial fit 
 
**y_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=2.39E+00, max=1.60E+01): flux uncertainty from the initial fit 
 
**y_modelfit_CModel_instFlux** (unit=count, type=double, min=-9.04E+00, max=1.38E+03): flux from the final cmodel fit 
 
**y_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-6.82E+00, max=9.86E+02): flux within the fit region, with no extrapolation 
 
**y_modelfit_CModel_instFluxErr** (unit=count, type=double, min=2.38E+00, max=3.97E+01): flux uncertainty from the final cmodel fit 
 
**y_modelfit_CModel_objective** (type=double, min=1.10E+00, max=7.77E+01): -ln(likelihood) (chi^2) in cmodel fit 
 
**z_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**z_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**z_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**z_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**z_base_InputCount_value** (type=int, min=4.80E+01, max=6.50E+01): Number of images contributing at center, not including anyclipping 
 
**z_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**z_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**z_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.15E-02, max=2.79E-02): background in annulus around source 
 
**z_base_LocalBackground_instFluxErr** (unit=count, type=double, min=1.41E-01, max=1.69E-01): 1-sigma instFlux uncertainty 
 
**z_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**z_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**z_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**z_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**z_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**z_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**z_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**z_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=1): Cosmic ray in the Source center 
 
**z_base_PixelFlags_flag_edge** (type=boolean, min=0, max=0): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**z_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**z_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**z_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**z_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**z_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**z_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**z_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**z_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=0): Saturated pixel in the Source footprint 
 
**z_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=0): Saturated pixel in the Source center 
 
**z_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**z_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**z_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**z_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**z_base_PsfFlux_apCorr** (type=double, min=9.90E-01, max=9.93E-01): aperture correction applied to base_PsfFlux 
 
**z_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**z_base_PsfFlux_area** (unit=pixel, type=double, min=6.06E+01, max=6.82E+01): effective area of PSF 
 
**z_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**z_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**z_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**z_base_PsfFlux_instFlux** (unit=count, type=double, min=-2.68E+00, max=1.37E+03): instFlux derived from linear least-squares fit of PSF model 
 
**z_base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.14E+00, max=1.49E+00): 1-sigma instFlux uncertainty 
 
**z_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**z_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**z_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**z_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**z_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**z_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**z_base_SdssCentroid_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): centroid from Sdss Centroid algorithm 
 
**z_base_SdssCentroid_xErr** (unit=pixel, type=double, min=3.64E-03, max=1.15E+04): 1-sigma uncertainty on x position 
 
**z_base_SdssCentroid_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**z_base_SdssCentroid_yErr** (unit=pixel, type=double, min=3.69E-03, max=1.89E+03): 1-sigma uncertainty on y position 
 
**z_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**z_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**z_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**z_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**z_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**z_base_SdssShape_instFlux** (unit=count, type=double, min=1.47E+00, max=1.24E+03): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-6.64E+02, max=1.03E+04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**z_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-3.32E+03, max=1.16E+03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**z_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-4.20E+01, max=3.47E+03): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**z_base_SdssShape_instFluxErr** (unit=count, type=double, min=2.71E-01, max=1.37E+01): 1-sigma instFlux uncertainty 
 
**z_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.88E+00, max=4.35E+00): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-1.62E-02, max=6.88E-03): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.88E+00, max=4.34E+00): adaptive moments of the PSF model at the object position 
 
**z_base_SdssShape_x** (unit=pixel, type=double, min=1.20E+04, max=1.92E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xx** (unit=pixel^2, type=double, min=7.73E-02, max=3.04E+05): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=9.92E-03, max=3.85E+02): Standard deviation of xx moment 
 
**z_base_SdssShape_xy** (unit=pixel^2, type=double, min=-2.68E+04, max=6.15E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=5.07E-03, max=1.31E+03): Standard deviation of xy moment 
 
**z_base_SdssShape_y** (unit=pixel, type=double, min=7.27E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_yy** (unit=pixel^2, type=double, min=6.06E-02, max=3.58E+05): elliptical Gaussian adaptive moments 
 
**z_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=7.07E-03, max=3.15E+02): Standard deviation of yy moment 
 
**z_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**z_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**z_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**z_base_Variance_value** (type=double, min=2.10E-02, max=2.89E-02): Variance at object position 
 
**z_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**z_modelfit_CModel_apCorr** (type=double, min=9.87E-01, max=9.90E-01): aperture correction applied to modelfit_CModel 
 
**z_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**z_modelfit_CModel_dev_apCorr** (type=double, min=9.87E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**z_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**z_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-2.97E+00, max=1.08E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**z_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-3.57E+00, max=1.37E+03): flux from the de Vaucouleur fit 
 
**z_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=1.14E+00, max=2.37E+01): flux uncertainty from the de Vaucouleur fit 
 
**z_modelfit_CModel_exp_apCorr** (type=double, min=9.88E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**z_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**z_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-3.00E+00, max=1.08E+03): flux from the exponential fit region, with no extrapolation 
 
**z_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-3.63E+00, max=1.37E+03): flux from the exponential fit 
 
**z_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.14E+00, max=1.07E+01): flux uncertainty from the exponential fit 
 
**z_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**z_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**z_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**z_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**z_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**z_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=0): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**z_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**z_modelfit_CModel_initial_apCorr** (type=double, min=9.88E-01, max=9.90E-01): aperture correction applied to modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**z_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**z_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**z_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**z_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-3.00E+00, max=1.08E+03): flux from the initial fit region, with no extrapolation 
 
**z_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-3.21E+00, max=1.37E+03): flux from the initial fit 
 
**z_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.14E+00, max=9.62E+00): flux uncertainty from the initial fit 
 
**z_modelfit_CModel_instFlux** (unit=count, type=double, min=-3.40E+00, max=1.37E+03): flux from the final cmodel fit 
 
**z_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-2.93E+00, max=1.08E+03): flux within the fit region, with no extrapolation 
 
**z_modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.14E+00, max=1.07E+01): flux uncertainty from the final cmodel fit 
 
**z_modelfit_CModel_objective** (type=double, min=3.86E-01, max=2.62E+01): -ln(likelihood) (chi^2) in cmodel fit 
 
