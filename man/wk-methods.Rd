% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/compat-wk.R
\name{wk-methods}
\alias{wk-methods}
\alias{wk_handle.geos_geometry}
\alias{geos_geometry_writer}
\alias{wk_writer.geos_geometry}
\title{Compatibility with the wk package}
\usage{
\method{wk_handle}{geos_geometry}(handleable, handler, ...)

geos_geometry_writer()

\method{wk_writer}{geos_geometry}(handleable, ...)
}
\arguments{
\item{handleable}{A geometry vector (e.g., \code{\link[wk:wkb]{wkb()}}, \code{\link[wk:wkt]{wkt()}}, \code{\link[wk:xy]{xy()}},
\code{\link[wk:rct]{rct()}}, or \code{\link[sf:sfc]{sf::st_sfc()}}) for which \code{\link[wk:wk_handle]{wk_handle()}} is defined.}

\item{handler}{A \link[wk:wk_handle]{wk_handler} object.}

\item{...}{Passed to the \code{\link[wk:wk_handle]{wk_handle()}} method.}
}
\value{
The result of the \code{handler}
}
\description{
Compatibility with the wk package
}
\examples{
library(wk)
wk_handle(as_geos_geometry("POINT (1 2)"), wk::wkt_writer())

}
