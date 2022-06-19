
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace simplified_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 50> locations_array__ = 
{" (found before start of program)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 34, column 2 to column 22)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 35, column 2 to column 29)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 36, column 2 to column 24)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 39, column 2 to column 19)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 40, column 2 to column 26)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 42, column 4 to column 18)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 43, column 4 to column 20)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 44, column 4 to column 21)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 46, column 4 to column 61)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 41, column 2 to line 47, column 3)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 60, column 2 to column 25)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 61, column 2 to column 33)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 62, column 2 to column 26)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 63, column 2 to column 61)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 66, column 2 to column 25)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 67, column 2 to column 22)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 69, column 8 to column 65)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 70, column 8 to column 79)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 68, column 24 to line 71, column 5)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 68, column 4 to line 71, column 5)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 51, column 2 to column 26)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 52, column 2 to column 27)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 53, column 2 to column 27)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 57, column 2 to column 52)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 22, column 2 to column 22)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 23, column 2 to column 13)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 24, column 2 to column 10)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 25, column 10 to column 16)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 25, column 2 to column 18)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 26, column 2 to column 8)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 27, column 12 to column 18)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 27, column 2 to column 20)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 30, column 2 to column 14)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 31, column 2 to column 21)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 39, column 9 to column 15)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 62, column 18 to column 24)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 66, column 9 to column 15)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 67, column 12 to column 18)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 5, column 6 to column 20)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 6, column 6 to column 20)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 7, column 6 to column 20)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 8, column 6 to column 22)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 10, column 6 to column 27)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 11, column 6 to column 28)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 13, column 6 to column 29)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 14, column 6 to column 41)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 15, column 6 to column 30)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 17, column 6 to column 35)",
 " (in '/Users/piotrszyller/Documents/2ndLv/s01/DataAnalytics/New/simplified.stan', line 3, column 36 to line 18, column 3)"};

struct sir_functor__ {
  template <typename T0__, typename T1__, typename T2__, typename T3__,
            stan::require_stan_scalar_t<T0__>* = nullptr,
            stan::require_stan_scalar_t<T1__>* = nullptr,
            stan::require_stan_scalar_t<T2__>* = nullptr,
            stan::require_stan_scalar_t<T3__>* = nullptr>
  std::vector<stan::promote_args_t<T0__, T1__, T2__, T3__>>
  operator()(const T0__& t, const std::vector<T1__>& y,
             const std::vector<T2__>& theta, const std::vector<T3__>& x_r,
             const std::vector<int>& x_i, std::ostream* pstream__) const;
};

template <typename T0__, typename T1__, typename T2__, typename T3__,
          stan::require_stan_scalar_t<T0__>* = nullptr,
          stan::require_stan_scalar_t<T1__>* = nullptr,
          stan::require_stan_scalar_t<T2__>* = nullptr,
          stan::require_stan_scalar_t<T3__>* = nullptr>
  std::vector<stan::promote_args_t<T0__, T1__, T2__, T3__>>
  sir(const T0__& t, const std::vector<T1__>& y,
      const std::vector<T2__>& theta, const std::vector<T3__>& x_r,
      const std::vector<int>& x_i, std::ostream* pstream__) {
    using local_scalar_t__ = stan::promote_args_t<T0__, T1__, T2__, T3__>;
    int current_statement__ = 0; 
    static constexpr bool propto__ = true;
    (void) propto__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      local_scalar_t__ S = DUMMY_VAR__;
      current_statement__ = 39;
      S = stan::model::rvalue(y, "y", stan::model::index_uni(1));
      local_scalar_t__ I = DUMMY_VAR__;
      current_statement__ = 40;
      I = stan::model::rvalue(y, "y", stan::model::index_uni(2));
      local_scalar_t__ R = DUMMY_VAR__;
      current_statement__ = 41;
      R = stan::model::rvalue(y, "y", stan::model::index_uni(3));
      local_scalar_t__ N = DUMMY_VAR__;
      current_statement__ = 42;
      N = stan::model::rvalue(x_i, "x_i", stan::model::index_uni(1));
      local_scalar_t__ beta = DUMMY_VAR__;
      current_statement__ = 43;
      beta = stan::model::rvalue(theta, "theta", stan::model::index_uni(1));
      local_scalar_t__ gamma = DUMMY_VAR__;
      current_statement__ = 44;
      gamma = stan::model::rvalue(theta, "theta", stan::model::index_uni(2));
      local_scalar_t__ dS_dt = DUMMY_VAR__;
      current_statement__ = 45;
      dS_dt = (-beta * S);
      local_scalar_t__ dI_dt = DUMMY_VAR__;
      current_statement__ = 46;
      dI_dt = ((beta * S) - (gamma * I));
      local_scalar_t__ dR_dt = DUMMY_VAR__;
      current_statement__ = 47;
      dR_dt = (gamma * I);
      current_statement__ = 48;
      return std::vector<local_scalar_t__>{dS_dt, dI_dt, dR_dt};
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    }
template <typename T0__, typename T1__, typename T2__, typename T3__,
          stan::require_stan_scalar_t<T0__>*,
          stan::require_stan_scalar_t<T1__>*,
          stan::require_stan_scalar_t<T2__>*,
          stan::require_stan_scalar_t<T3__>*>
std::vector<stan::promote_args_t<T0__, T1__, T2__, T3__>>
sir_functor__::operator()(const T0__& t, const std::vector<T1__>& y,
                          const std::vector<T2__>& theta,
                          const std::vector<T3__>& x_r,
                          const std::vector<int>& x_i,
                          std::ostream* pstream__)  const
{
  return sir(t, y, theta, x_r, x_i, pstream__);
}

 class simplified_model final : public model_base_crtp<simplified_model> {

 private:
  int n_days;
  std::vector<double> y0;
  double t0;
  std::vector<double> ts;
  int N;
  std::vector<int> cases;
  std::vector<double> x_r;
  std::vector<int> x_i; 
  
 
 public:
  ~simplified_model() { }
  
  inline std::string model_name() const final { return "simplified_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  simplified_model(stan::io::var_context& context__,
                   unsigned int random_seed__ = 0,
                   std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "simplified_model_namespace::simplified_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 25;
      context__.validate_dims("data initialization","n_days","int",
           std::vector<size_t>{});
      n_days = std::numeric_limits<int>::min();
      
      
      current_statement__ = 25;
      n_days = context__.vals_i("n_days")[(1 - 1)];
      current_statement__ = 25;
      stan::math::check_greater_or_equal(function__, "n_days", n_days, 1);
      current_statement__ = 26;
      context__.validate_dims("data initialization","y0","double",
           std::vector<size_t>{static_cast<size_t>(3)});
      y0 = std::vector<double>(3, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 26;
      y0 = context__.vals_r("y0");
      current_statement__ = 27;
      context__.validate_dims("data initialization","t0","double",
           std::vector<size_t>{});
      t0 = std::numeric_limits<double>::quiet_NaN();
      
      
      current_statement__ = 27;
      t0 = context__.vals_r("t0")[(1 - 1)];
      current_statement__ = 28;
      stan::math::validate_non_negative_index("ts", "n_days", n_days);
      current_statement__ = 29;
      context__.validate_dims("data initialization","ts","double",
           std::vector<size_t>{static_cast<size_t>(n_days)});
      ts = 
        std::vector<double>(n_days, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 29;
      ts = context__.vals_r("ts");
      current_statement__ = 30;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 30;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 31;
      stan::math::validate_non_negative_index("cases", "n_days", n_days);
      current_statement__ = 32;
      context__.validate_dims("data initialization","cases","int",
           std::vector<size_t>{static_cast<size_t>(n_days)});
      cases = std::vector<int>(n_days, std::numeric_limits<int>::min());
      
      
      current_statement__ = 32;
      cases = context__.vals_i("cases");
      current_statement__ = 33;
      x_r = std::vector<double>(0, std::numeric_limits<double>::quiet_NaN());
      
      
      current_statement__ = 34;
      x_i = std::vector<int>(1, std::numeric_limits<int>::min());
      
      
      current_statement__ = 34;
      stan::model::assign(x_i, std::vector<int>{N}, "assigning variable x_i");
      current_statement__ = 35;
      stan::math::validate_non_negative_index("y", "n_days", n_days);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("pred_cases", "n_days", n_days);
      current_statement__ = 37;
      stan::math::validate_non_negative_index("log_lik", "n_days", n_days);
      current_statement__ = 38;
      stan::math::validate_non_negative_index("y_hat", "n_days", n_days);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "simplified_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ gamma = DUMMY_VAR__;
      current_statement__ = 1;
      gamma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      local_scalar_t__ beta = DUMMY_VAR__;
      current_statement__ = 2;
      beta = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(
               0, 1, lp__);
      local_scalar_t__ phi_inv = DUMMY_VAR__;
      current_statement__ = 3;
      phi_inv = in__.template read_constrain_lb<local_scalar_t__, 
                  jacobian__>(0, lp__);
      std::vector<std::vector<local_scalar_t__>> y =
         std::vector<std::vector<local_scalar_t__>>(n_days, 
           std::vector<local_scalar_t__>(3, DUMMY_VAR__));
      local_scalar_t__ phi = DUMMY_VAR__;
      current_statement__ = 5;
      phi = (1. / phi_inv);
      {
        std::vector<local_scalar_t__> theta =
           std::vector<local_scalar_t__>(2, DUMMY_VAR__);
        current_statement__ = 7;
        stan::model::assign(theta, beta,
          "assigning variable theta", stan::model::index_uni(1));
        current_statement__ = 8;
        stan::model::assign(theta, gamma,
          "assigning variable theta", stan::model::index_uni(2));
        current_statement__ = 9;
        stan::model::assign(y,
          stan::math::integrate_ode_rk45(sir_functor__(), y0, t0, ts, theta,
            x_r, x_i, pstream__), "assigning variable y");
      }
      {
        current_statement__ = 21;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta, 0.6, 0.3));
        current_statement__ = 22;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(gamma, 0.4, 0.5));
        current_statement__ = 23;
        lp_accum__.add(stan::math::exponential_lpdf<propto__>(phi_inv, 5));
        current_statement__ = 24;
        lp_accum__.add(
          stan::math::neg_binomial_2_lpmf<propto__>(cases,
            stan::math::col(stan::math::to_matrix(y), 2), phi));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "simplified_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double gamma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      gamma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      double beta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta = in__.template read_constrain_lub<local_scalar_t__, jacobian__>(
               0, 1, lp__);
      double phi_inv = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      phi_inv = in__.template read_constrain_lb<local_scalar_t__, 
                  jacobian__>(0, lp__);
      std::vector<std::vector<double>> y =
         std::vector<std::vector<double>>(n_days, 
           std::vector<double>(3, std::numeric_limits<double>::quiet_NaN()));
      double phi = std::numeric_limits<double>::quiet_NaN();
      out__.write(gamma);
      out__.write(beta);
      out__.write(phi_inv);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 5;
      phi = (1. / phi_inv);
      {
        std::vector<double> theta =
           std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
        current_statement__ = 7;
        stan::model::assign(theta, beta,
          "assigning variable theta", stan::model::index_uni(1));
        current_statement__ = 8;
        stan::model::assign(theta, gamma,
          "assigning variable theta", stan::model::index_uni(2));
        current_statement__ = 9;
        stan::model::assign(y,
          stan::math::integrate_ode_rk45(sir_functor__(), y0, t0, ts, theta,
            x_r, x_i, pstream__), "assigning variable y");
      }
      if (emit_transformed_parameters__) {
        for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
          for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
            out__.write(y[(sym2__ - 1)][(sym1__ - 1)]);
          }
        }
        out__.write(phi);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double R0 = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 11;
      R0 = (beta / gamma);
      double recovery_time = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 12;
      recovery_time = (1 / gamma);
      std::vector<double> pred_cases =
         std::vector<double>(n_days, 
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 14;
      stan::model::assign(pred_cases,
        stan::math::neg_binomial_2_rng(
          stan::math::col(stan::math::to_matrix(y), 2), phi, base_rng__),
        "assigning variable pred_cases");
      Eigen::Matrix<double, -1, 1> log_lik =
         Eigen::Matrix<double, -1, 1>::Constant(n_days,
           std::numeric_limits<double>::quiet_NaN());
      std::vector<std::vector<int>> y_hat =
         std::vector<std::vector<int>>(n_days, 
           std::vector<int>(3, std::numeric_limits<int>::min()));
      current_statement__ = 20;
      for (int j = 1; j <= n_days; ++j) {
        current_statement__ = 17;
        stan::model::assign(y_hat,
          stan::math::neg_binomial_2_rng(
            stan::math::col(stan::math::to_matrix(y), 2), phi, base_rng__),
          "assigning variable y_hat", stan::model::index_uni(j));
        current_statement__ = 18;
        stan::model::assign(log_lik,
          stan::math::neg_binomial_2_lpmf<false>(
            stan::model::rvalue(cases, "cases", stan::model::index_uni(j)),
            stan::math::col(stan::math::to_matrix(y), 2), phi),
          "assigning variable log_lik", stan::model::index_uni(j));
      }
      out__.write(R0);
      out__.write(recovery_time);
      out__.write(pred_cases);
      out__.write(log_lik);
      for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
          out__.write(y_hat[(sym2__ - 1)][(sym1__ - 1)]);
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ gamma = DUMMY_VAR__;
      gamma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, gamma);
      local_scalar_t__ beta = DUMMY_VAR__;
      beta = in__.read<local_scalar_t__>();
      out__.write_free_lub(0, 1, beta);
      local_scalar_t__ phi_inv = DUMMY_VAR__;
      phi_inv = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, phi_inv);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"gamma", "beta", "phi_inv", "y",
      "phi", "R0", "recovery_time", "pred_cases", "log_lik", "y_hat"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(n_days), static_cast<size_t>(3)},
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{static_cast<size_t>(n_days)},
      std::vector<size_t>{static_cast<size_t>(n_days)},
      std::vector<size_t>{static_cast<size_t>(n_days), static_cast<size_t>(3)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "gamma");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "phi_inv");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
      param_names__.emplace_back(std::string() + "phi");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "R0");
      param_names__.emplace_back(std::string() + "recovery_time");
      for (int sym1__ = 1; sym1__ <= n_days; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "pred_cases" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= n_days; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "gamma");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "phi_inv");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "y" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
      param_names__.emplace_back(std::string() + "phi");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "R0");
      param_names__.emplace_back(std::string() + "recovery_time");
      for (int sym1__ = 1; sym1__ <= n_days; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "pred_cases" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= n_days; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= 3; ++sym1__) {
        {
          for (int sym2__ = 1; sym2__ <= n_days; ++sym2__) {
            {
              param_names__.emplace_back(std::string() + "y_hat" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
            } 
          }
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"gamma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"phi_inv\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"real\"}}},\"block\":\"transformed_parameters\"},{\"name\":\"phi\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"R0\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"recovery_time\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"pred_cases\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(n_days) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"int\"}}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"gamma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"phi_inv\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"real\"}}},\"block\":\"transformed_parameters\"},{\"name\":\"phi\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"R0\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"recovery_time\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"pred_cases\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(n_days) + "},\"block\":\"generated_quantities\"},{\"name\":\"y_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(n_days) + ",\"element_type\":{\"name\":\"array\",\"length\":" + std::to_string(3) + ",\"element_type\":{\"name\":\"int\"}}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = ((n_days * 3) + 1);
      const size_t num_gen_quantities = 
  ((((1 + 1) + n_days) + n_days) + (n_days * 3));
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = ((n_days * 3) + 1);
      const size_t num_gen_quantities = 
  ((((1 + 1) + n_days) + n_days) + (n_days * 3));
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 3> names__{"gamma", "beta",
      "phi_inv"};
      const std::array<Eigen::Index, 3> constrain_param_sizes__{1, 1, 1};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
     }; } using stan_model = simplified_model_namespace::simplified_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return simplified_model_namespace::profiles__;
}

#endif


